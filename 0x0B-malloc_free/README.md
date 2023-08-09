# Memory block allocation

## Malloc
    void *malloc(size_t size);
    It is used to allocate memory block for a variable and fills is with
    Found in the standard library take only one parameter or argument.
    Declaration: malloc(sizeof(datatype var_name) * size);
    int c;
    unsigned int size;
    mem_block = malloc(sizeof(c) * size);

## Realloc
    void *realloc(void *ptr, size_t size);
    It is used to reallocate memory block for a variable.
    Found in the stdlib it takes two parameters or argument.
    Declaration: realloc(void *ptr*, sizeof(datatype var_name)  )
## Calloc
## Free
    void free(void *ptr);
    It is used to off load a memory block or deallocate memory to make the memory block available for next allocation.
    it fills the memory block with garbage.
