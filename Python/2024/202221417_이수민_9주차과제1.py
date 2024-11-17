import numpy as np
import simpy

def calculate_band_matrix(env, matrix):
    n = matrix.shape[0]
    band_matrix = np.full((n, n), '', dtype=object) 

    for i in range(n):
        for j in range(n):
            if i <= j:
                band_matrix[i, j] = matrix[i, j]
            else:
                band_matrix[i, j] = '0'  

    band_matrix_str = np.array2string(band_matrix, formatter={'all': lambda x: f'{x}'})
    print(f"시간 {env.now}: 계산된 띠행렬:\n{band_matrix_str}\n")
    yield env.timeout(1)

env = simpy.Environment()

matrix = np.array([[1, 0, 0, 0, 0, 0, 0, 0],
                    [0, 1, 0, 0, 0, 0, 0, 0],
                    [1, 't_f1', 't2_f1', 't3_f1', 0, 0, 0, 0],
                    [0, 0, 0, 0, 1, 0, 0, 0],
                    [0, 0, 0, 0, 1, 't_f2', 't2_f2', 't3_f2'],
                    [0, 0, 0, 0, 0, 1, '2t_f2', '3t2_f2'],
                    [0, 0, '2t2_f1', '3t2_f1', 0, -1, 0, 0],
                    [0, 0, 2, '6t_f1', 0, 0, -2, 0]
                   ])

env.process(calculate_band_matrix(env, matrix))
env.run()