# Libft

Welcome to the Libft project! This project aims to recreate some standard C library functions as well as additional useful functions that will be used throughout the 42 curriculum.

## Table of Contents

- [Libft](#libft)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [Usage](#usage)
  - [Example](#example)
  - [Documentation](#documentation)
  - [Contributing](#contributing)
  - [License](#license)
  - [Acknowledgments](#acknowledgments)

## Introduction

The Libft library provides a collection of functions that are commonly used in C programming like those included in some standard headers.

`These functions are implemented from SCRATCH` and can be used as a replacement for their standard library counterparts.

## Usage

To use the Libft library in your project, follow these steps:

- Clone the repository:

```sh
git clone https://github.com/shexweeknd/42-cursus-Libft.git
```

- Go to the directory:

```sh
cd 42-cursus-Libft/
```

- Now just run:

```sh
make
```

After running `make`, you'll get a file named `libft.a`, this file is an archive containing all functions in the folder `functions/` we call it library archive...(oubviously !). Whatever, this file can now be used as a source for compilation.

## Example

Let's assume you will need to use my **ft_printf** function, and you have already created the **libft.a**.

Here is an example of **main.c**:

```c
#include "libft.h"

int main(void)
{
    int result;

    result = 42;
    ft_printf("My school is: %d Antananarivo\n", result);
    return (0);
}
```

Just compile your main.c with the Libft library, and then execute the binary:

```sh
cc -o 42.out main.c -L./libft -lft && \

./42.out
```

>**Note:** "*-L./Libft*" in the commands represents the relative path of the current `libft.a` archive.

## Documentation

For detailed documentation on each function provided by the Libft library, refer to the [official documentation](https://cdn.kernel.org/pub/linux/docs/man-pages/book/).

## Contributing

Contributions to the Libft project are welcome! If you find any bugs or have suggestions for improvements, please open an issue or submit a pull request.

## License

![42](https://github.com/shexweeknd/blob/blob/main/42-cursus-Philosophers/42-cursus-Philosophers-42-logo.png)

This project is from 42 School Common Core Cursurs. I do not own any of the concept mentionned above. Instead I own the provided code in the repository.

Licensed under the [MIT License](https://github.com/shexweeknd/blob/blob/main/LICENSE).

## Acknowledgments

- 42 Network for providing the project.
- Axian Group