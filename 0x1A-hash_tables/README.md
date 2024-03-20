# C Hash Table

A simple hash table implementation in C.

## Features

- Generic key-value pairs.
- Separate chaining for collision resolution.
- Dynamic resizing for efficiency.

## Usage

1. Clone the repository.
2. Include `hash_table.h` and compile with `hash_table.c`.
3. Use provided functions for insertion, deletion, and lookup.

## API Reference

- `create_table(size_t capacity)`: Create a new hash table.
- `insert(table, key, value)`: Insert a key-value pair.
- `lookup(table, key)`: Lookup a value by key.
- `delete(table, key)`: Delete a key-value pair.
- `destroy_table(table)`: Free memory.

## Contributing

Contributions welcome! Please open an issue or PR.
