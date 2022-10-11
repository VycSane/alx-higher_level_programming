#include <stdlib.h>
#include <stdio.h>
#include <Python.h>

/**
 * print_python_list - prints info on python list
 * @p: PyObject arg
 */
void print_python_list(PyObject *p)
{
	Py_ssize_t list_len = (((PyVarObject*)(p))->ob_size);	
	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", list_len);
}
/**
 * print_python_bytes - prints info on python bytes
 * @p: PyObject arg
 */
void print_python_bytes(PyObject *p)
{
	if (PyBytes_Check(p))
	{
		printf("[.] bytes object info\n");
		printf("  size: %ld\n", (((PyVarObject*)(p))->ob_size));
		printf("  trying string: %s\n", (((PyBytesObject *)(p))->ob_sval));
	}
	else
	{
		printf("  [ERROR] Invalid Bytes Object\n");
	}
}
