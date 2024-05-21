sfinae C++14 small test project
===============================

# Project layout
```
├── CMakeLists.txt
├── README.md
├── include      # Header files
│   └── sfinae.h
├── src          # Source files
│   └── sfinae.cpp
├── tests        # Various tests
│   ├── integration
│   ├── performance
│   └── unit
├── conanfile.py # Conan package manager file
```

# Due to dependencies are managed by Conan, you need to install it first
```bash
pip install -r requirements.txt
```

# Build
```bash
conan install . --build=missing
cmake --preset conan-debug
cmake --build --preset conan-debug
```

# Run tests
```bash
ctest --preset conan-debug
```


>📝
> Based on the template https://github.com/valden/cpptest
> Based on my earlier work https://bitbucket.org/dvalchuk/algo-one/src/master/c%2B%2B/sfinae/
