import matplotlib.pyplot as plt
import numpy as np

t = np.linspace(-1, 10, 1000)   #개수
t1 = np.arange(0,10+1/100,1/100) #샘플링 주파수/주기

u = lambda t: 1 * (t >= 0)         #y=u(x)
rects = lambda t: 1 * (abs(t) < 0.5)  #rect(t)
r = lambda t : t * (t >= 0) 
sine = lambda t : np.sin(t)
cosine = lambda t : np.cos(t)
exp = lambda t : np.exp(t)
log = lambda t : np.log(t)
a = lambda t : exp(-abs(t))*np.sin(2*t)
b = lambda t : np.cos(4*t)*u(t)
c = lambda t : np.exp(-abs(t+1))
d = lambda t : u(t)-u(t-2)

delta = 0.1
shortPulse = lambda t : (u(t)-u(t-delta)) / delta



def d1(t):
  """short pulse"""
  return shortPulse(t)

def d2(t):
  """response to short pulse"""
  return sine(3*t)

# def d3(t):
#   """"""
#   return log(t)

# def d4(t):
#   """"""
#   return exp(-3*t)*u(-t)

functions = [d1,d2]

plt.subplot(1,2,1); plt.plot(t,d1(t)); plt.grid(); plt.tight_layout(); plt.xlim(-0.5,0.5)
plt.subplot(1,2,2); plt.plot(t,d2(t)); plt.grid(); plt.tight_layout(); plt.figure(figsize=(10,5))

# for i, function in enumerate(functions, start=1):
#     plt.plot(t, function(t))
#     plt.title(function.__doc__)
#     plt.grid()
#     plt.xlim(-1,5)
#     # plt.axis([-1, 6, -2, 2])
#     plt.show()
plt.tight_layout()
plt.show()

