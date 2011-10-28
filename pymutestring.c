
/* Alejandro Santos 2011 - alejolp@alejolp.com.ar */

#include <Python.h>

static PyObject * cambiarchr(PyObject *self, PyObject *args)
{
    const char *a;
    const char *b;

    if (!PyArg_ParseTuple(args, "ss", &a, &b))
        return NULL;

    ((char*)a)[0] = b[0];

    Py_INCREF(Py_None);
    return Py_None;
}

static PyMethodDef MyMethods[] = {
    {"cambiarchr",  cambiarchr, METH_VARARGS, ""},
    {NULL, NULL, 0, NULL}        /* Sentinel */
};

PyMODINIT_FUNC
initpymutestring(void)
{
    (void) Py_InitModule("pymutestring", MyMethods);
}

