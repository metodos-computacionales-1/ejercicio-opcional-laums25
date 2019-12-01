import os
import matplotlib.pylab as plt
import numpy as np

plt.figure(1, figsize=(8,4))

data = np.loadtxt("Ejer.dat")

plt.scatter(data[:,0], data[:,1], 0.005)
plt.xlabel("fuerza")
plt.ylabel("theta")
plt.title("Bifurcación")

plt.savefig("opcional.png")