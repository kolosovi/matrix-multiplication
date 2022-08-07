#pragma once

#define N 1000

double res[N][N];
double mul1[N][N];
double mul2[N][N];

double multiply() {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < N; ++k) {
                res[i][j] += mul1[i][k] * mul2[k][j];
            }
        }
    }
    return res[N-1][N-1];
}
