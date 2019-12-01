import matplotlib.pylab as plt
import numpy as np


def Logistic_map(x,L):
    return L*x*(1-x)
x=[0.001]
R=2
x_total=np.linspace(0,1,1000)
for i in range(100):
    x.append(Logistic_map(x[-1],R))
    plt.step(x,x,alpha=1,color="rebeccapurple",linewidth=0.8)
    plt.title(r"$\lambda=${}, iteration number = {}".format(round(R,3),i+1))
    plt.plot(x_total,Logistic_map(x_total,R),color="navy")
    plt.plot(x_total,x_total,color="orange")
    plt.xlim(0,0.6)
    plt.ylim(0,0.6)
    plt.savefig(str(i).zfill(4)+".png")
    plt.show()
