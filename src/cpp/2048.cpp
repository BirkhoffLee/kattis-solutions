#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

int NUM_ROWS_TOTAL = 4;
int NUM_COLS_TOTAL = 4;

void print_data (std::vector< std::vector<int> > &data) {
    for (int row = 0; row < NUM_ROWS_TOTAL; ++row) {
        for (int col = 0; col < NUM_COLS_TOTAL; ++col) {
            std::cout << data[row][col] << " ";
        }

        std::cout << std::endl;
    }
}

void add_towards_left (std::vector< std::vector<int> > &data) {
    int previous_number = -1;

    for (int row = 0; row < NUM_ROWS_TOTAL; ++row) {
        for (int col = 0; col < NUM_COLS_TOTAL; ++col) {
            if (previous_number == -1) {
                previous_number = data[row][col];
                continue;
            }

            if (data[row][col - 1] == 0) {
                int zeros = 0;

                for (int i = col - 1; i > -1; --i) {
                    if (data[row][i] == 0) {
                        zeros++;
                    }
                }

                // Segmentation Fault safety check first
                if (col - (zeros + 1) >= 0 && data[row][col - (zeros + 1)] == data[row][col]) {
                    data[row][col - (zeros + 1)] += data[row][col];
                } else {
                    data[row][col - zeros] += data[row][col];
                }

                data[row][col] = 0;
            }

            if (data[row][col] == previous_number && data[row][col] != 0) {
                data[row][col - 1] += data[row][col];

                // Segmentation Fault safety check
                if (col + 1 <= (NUM_COLS_TOTAL - 1)) {
                    data[row][col] = data[row][col + 1];
                    data[row][col + 1] = 0;
                } else {
                    data[row][col] = 0;
                }
            }

            previous_number = data[row][col];
        }

        previous_number = -1;
    }
}

void add_towards_up (std::vector< std::vector<int> > &data) {
    int previous_number = -1;

    for (int col = 0; col < NUM_COLS_TOTAL; ++col) {
        for (int row = 0; row < NUM_ROWS_TOTAL; ++row) {
            if (previous_number == -1) {
                previous_number = data[row][col];
                continue;
            }

            if (data[row - 1][col] == 0) {
                int zeros = 0;

                for (int i = row - 1; i > -1; --i) {
                    if (data[i][col] == 0) {
                        zeros++;
                    }
                }

                // Segmentation Fault safety check first
                if (row - (zeros + 1) >= 0 && data[row - (zeros + 1)][col] == data[row][col]) {
                    data[row - (zeros + 1)][col] += data[row][col];
                } else {
                    data[row - zeros][col] += data[row][col];
                }

                data[row][col] = 0;
            }

            if (data[row][col] == previous_number && data[row][col] != 0) {
                data[row - 1][col] += data[row][col];

                // Segmentation Fault safety check
                if (row + 1 <= (NUM_ROWS_TOTAL - 1)) {
                    data[row][col] = data[row + 1][col];
                    data[row + 1][col] = 0;
                } else {
                    data[row][col] = 0;
                }
            }

            previous_number = data[row][col];
        }

        previous_number = -1;
    }
}

void add_towards_right (std::vector< std::vector<int> > &data) {
    int previous_number = -1;

    for (int row = 0; row < NUM_ROWS_TOTAL; ++row) {
        for (int col = NUM_COLS_TOTAL - 1; col > -1 ; --col) {
            if (previous_number == -1) {
                previous_number = data[row][col];
                continue;
            }

            if (data[row][col + 1] == 0) {
                int zeros = 0;

                for (int i = col + 1; i < NUM_COLS_TOTAL; ++i) {
                    if (data[row][i] == 0) {
                        zeros++;
                    }
                }

                // Segmentation Fault safety check
                if (col + (zeros + 1) <= (NUM_COLS_TOTAL - 1) && data[row][col + (zeros + 1)] == data[row][col]) {
                    data[row][col + (zeros + 1)] += data[row][col];
                } else {
                    data[row][col + zeros] += data[row][col];
                }

                data[row][col] = 0;
            }

            if (data[row][col] == previous_number && data[row][col] != 0) {
                data[row][col + 1] += data[row][col];

                // Segmentation Fault safety check
                if (col - 1 >= 0) {
                    data[row][col] = data[row][col - 1];
                    data[row][col - 1] = 0;
                } else {
                    data[row][col] = 0;
                }
            }

            previous_number = data[row][col];
        }

        previous_number = -1;
    }
}

void add_towards_down (std::vector< std::vector<int> > &data) {
    int previous_number = -1;

    for (int col = 0; col < NUM_COLS_TOTAL; ++col) {
        for (int row = NUM_ROWS_TOTAL - 1; row > -1; --row) {
            if (previous_number == -1) {
                previous_number = data[row][col];
                continue;
            }

            if (data[row + 1][col] == 0) {
                int zeros = 0;

                for (int i = row + 1; i < NUM_ROWS_TOTAL; ++i) {
                    if (data[i][col] == 0) {
                        zeros++;
                    }
                }

                // Segmentation Fault safety check first
                if (row + (zeros + 1) <= (NUM_ROWS_TOTAL - 1) && data[row + (zeros + 1)][col] == data[row][col]) {
                    data[row + (zeros + 1)][col] += data[row][col];
                } else {
                    data[row + zeros][col] += data[row][col];
                }

                data[row][col] = 0;
            }

            if (data[row][col] == previous_number && data[row][col] != 0) {
                data[row + 1][col] += data[row][col];

                // Segmentation Fault safety check
                if (row - 1 >= 0) {
                    data[row][col] = data[row - 1][col];
                    data[row - 1][col] = 0;
                } else {
                    data[row][col] = 0;
                }
            }

            previous_number = data[row][col];
        }

        previous_number = -1;
    }
}

void direction_controller (int &direction_number, std::vector< std::vector<int> > &data) {
    switch (direction_number) {
        case 0: // left
            add_towards_left(data);
            break;
        case 1: // up
            add_towards_up(data);
            break;
        case 2: // right
            add_towards_right(data);
            break;
        case 3: // down
            add_towards_down(data);
            break;
    }
}

void get_data (std::vector< std::vector<int> > &data, int &direction) {
    for (int i = 0; i < NUM_ROWS_TOTAL; ++i) {
        for (int j = 0; j < NUM_COLS_TOTAL; ++j) {
            int number;
            std::cin >> number;

            data[i].push_back(number);
        }
    }

    std::cin >> direction;
}

int main() {
    int direction;

    std::vector< std::vector<int> > data(NUM_ROWS_TOTAL);

    get_data(data, direction);
    direction_controller(direction, data);
    print_data(data);

    return 0;
}