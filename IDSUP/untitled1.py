#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Mar  7 14:20:28 2024

@author: student
"""

from matplotlib import pyplot as plt

years=[1950,1960,1970,1980,1990,2000,2010]
gdp=[300.2,543.3,1075.9,2862.5,5979.9,10289.7,14958.3]
plt.plot(years,gdp,color='red',marker='s',linestyle='--')
plt.title('MY Graph',color='green')
a=2
a