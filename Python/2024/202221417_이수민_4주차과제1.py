import numpy as np

A = np.array([[1, 1, 2, 4],
              [3, 2, 1, 3],
              [2, 1, 6, 7]])

A_pseudo = np.linalg.pinv(A)

print(A_pseudo)