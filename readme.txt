>>> import pymutestring
>>> a = "Python"
>>> id(a)
140684290097200
>>> pymutestring.cambiarchr(a, "B")
>>> a
'Bython'
>>> id(a)
140684290097200

