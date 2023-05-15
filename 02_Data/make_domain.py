import numpy as np
from scipy import special
import matplotlib.pyplot as plt

x = np.linspace(-1., 1.5, 1000)
z = np.linspace(-0.5, 0.5, 1000)
X, Z = np.meshgrid(x, z)
print(X.flatten())

L      = 0.9144 # m
x0_o_L = 0.195
z0_o_L = 0.06
h_o_L  = 0.085

x0 = x0_o_L * L
z0 = z0_o_L * L
h  = h_o_L  * L

y_x_z = h * (1. + special.erf((L/2. - 2. * z0 - abs(z))/z0))/2. * np.exp(-(x/x0)**2)

np.savetxt('x.txt', x)
np.savetxt('z.txt', z)
np.savetxt('y.txt', y_x_z)

y_x_z = h * (1. + special.erf((L/2. - 2. * z0 - abs(Z))/z0))/2. * np.exp(-(X/x0)**2)
#print(y_x_z.shape)
#speed_bump = np.vstack([X,Z,y_x_z])
#np.savetxt('speed_bump.txt', speed_bump)

#ax = plt.figure().add_subplot(projection='3d')
#ax.plot_trisurf(x, z, y_x_z, linewidth=0.2, antialiased=True)
#plt.show()

fig = plt.figure()
ax = fig.add_subplot(projection='3d')
ax.plot_surface(X, Z, y_x_z, cmap=plt.cm.YlGnBu_r)

# Tweak the limits and add latex math labels.
#ax.set_zlim(0, 1)
#ax.set_xlabel(r'$\phi_\mathrm{real}$')
#ax.set_ylabel(r'$\phi_\mathrm{im}$')
#ax.set_zlabel(r'$V(\phi)$')
plt.show()

#plt.plot(z, special.erf(z))
#plt.xlabel('$x$')
#plt.ylabel('$erf(x)$')
#plt.show()
