# std::vector<bool> Gotchas: Unexpected Behavior and Performance Issues

This repository demonstrates some of the unexpected behavior and potential performance issues associated with using `std::vector<bool>` in C++. `std::vector<bool>` is a specialized container with a compact bit-vector implementation, which can deviate from the behavior of other standard vector types.

## Issues

* **Iterator behavior:** Iterators may not work as expected. Pointer arithmetic on elements is not guaranteed to work as on other vector types.
* **Exception safety:** Lack of exception safety for some operations like insertion and deletion.
* **Performance:** Compact representation may impact performance if you're performing many individual element operations.

## Recommended Alternatives

For most use cases, consider using `std::vector<char>` (with `true` represented by 1 and `false` by 0) or a dedicated boolean vector implementation that provides better performance and adheres more closely to the behavior of other standard container types. Using `std::vector<char>` provides a straightforward alternative, minimizing the risk of issues associated with `std::vector<bool>`'s implementation.