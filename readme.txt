
NO hagan esto en sus casas. Como modificar strings inmutables de Python:

>>> import pymutestring
>>> a = "Python"
>>> id(a), hash(a)
(140690085953584, -2359742753373747800)
>>> pymutestring.cambiarchr(a, "B")
>>> id(a), hash(a)
(140690085953584, -2359742753373747800)
>>> a
'Bython'

