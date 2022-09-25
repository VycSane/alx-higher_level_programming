#include <stdlib.h>
#include <Python.h>
#include <stdio.h>

/**
 * print_python_list_info - prints some info of a pythonlist
 * @p: Python object arg
 */
void print_python_list_info(PyObject *p)
{
	Py_ssize_t list_len, i = 0;

	list_len = PyList_Size(p);
	printf("[*] Size of the Python List = %ld\n", list_len);
	printf("[*] Allocated = %s\n", list_len);
	while (i < list_len)
	{
		printf("Element %ld: %s\n", i, Py_TYPE(PyList_GetItem(p, i))->tp_name);
		i++;
	}
}
