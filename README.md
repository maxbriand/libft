# Libft

**Version:** 16.7

Libft is your very first custom C library developed as part of the 42 School curriculum. This project challenges you to re-implement standard libc functions and create additional utilities, enhancing your understanding of C programming, memory management, and coding best practices. The resulting library serves as a powerful tool in your subsequent projects.

---

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Functions Overview](#functions-overview)
  - [Mandatory Functions (Part 1)](#mandatory-functions-part-1)
  - [Additional Functions (Part 2)](#additional-functions-part-2)
  - [Bonus Functions (Linked Lists)](#bonus-functions-linked-lists)
- [Technical Considerations](#technical-considerations)
- [Testing](#testing)
- [Submission Guidelines](#submission-guidelines)
- [Contributing](#contributing)
- [License](#license)

---

## Introduction

Libft is designed to solidify your grasp on core C concepts by building key functions from scratch. By re-creating these functions, you learn the inner workings of standard routines such as string handling, memory operations, and even linked list management. This project not only serves as an educational exercise but also creates a foundation that you can reuse in future C projects.

---

## Features

- **Custom Implementations:** Re-create common libc functions with your own `ft_` prefix (e.g., `ft_strlen`, `ft_memset`).
- **Additional Utilities:** Expand functionality with extra string and memory functions not available in the standard library.
- **Bonus Section:** Implement linked list operations with a custom `t_list` structure.
- **Strict Norm Compliance:** All code adheres to the Norm, ensuring consistency, readability, and maintainability.
- **Memory Management:** Emphasis on correct memory allocation/deallocation to prevent leaks.
- **Makefile Provided:** Easily compile the library with a comprehensive Makefile including rules for building, cleaning, and bonus functionalities.

---

## Installation

To compile the library, ensure you have a C compiler (such as `gcc`) installed. Then, clone the repository and use the provided Makefile:

```bash
git clone https://github.com/yourusername/libft.git
cd libft
make
```

If you wish to compile the bonus functions as well, execute:

```bash
make bonus
```

Usage
Include the libft.h header in your project and link against the static library libft.a. Here’s a quick example:

```c
#include "libft.h"

int main(void) {
    char *str = ft_strdup("Hello, world!");
    ft_putstr_fd(str, 1);
    free(str);
    return 0;
}
```

Compile your program by linking with the library:

```bash
gcc -Wall -Wextra -Werror your_program.c libft.a -o your_program
```

Functions Overview
Mandatory Functions (Part 1)
These functions re-implement core libc features:

Character Checks:
ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint
String Functions:
ft_strlen, ft_strchr, ft_strrchr, ft_strncmp, ft_strnstr
Memory Functions:
ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp
Conversion & Allocation:
ft_atoi, ft_calloc, ft_strdup
Case Conversion:
ft_toupper, ft_tolower
Copy & Concatenation:
ft_strlcpy, ft_strlcat
Additional Functions (Part 2)
These functions provide enhanced utilities beyond standard libc functions:

Substrings & Joining:
ft_substr, ft_strjoin
Trimming:
ft_strtrim
Splitting:
ft_split
Integer to String Conversion:
ft_itoa
String Mapping & Iteration:
ft_strmapi, ft_striteri
File Descriptor Outputs:
ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd
Bonus Functions (Linked Lists)
For an extra challenge, implement linked list operations using the t_list structure defined in libft.h:

Creation & Insertion:
ft_lstnew, ft_lstadd_front, ft_lstadd_back
Traversal & Size:
ft_lstsize, ft_lstlast
Deletion & Clearing:
ft_lstdelone, ft_lstclear
Iteration & Mapping:
ft_lstiter, ft_lstmap
Technical Considerations
Norm Compliance:
All code must strictly adhere to the Norm. Global variables are forbidden, and helper functions should be declared static if only used within one file.
Compilation Flags:
Every file must compile with the flags -Wall -Wextra -Werror.
Makefile Requirements:
The Makefile must include at least the rules NAME, all, clean, fclean, and re. For bonus functions, include a bonus rule.
Memory Management:
Ensure that every heap allocation is properly freed. Memory leaks are not tolerated.
Restrictions:
Only allowed functions and libraries are to be used. For bonus code, separate files (_bonus.c/_bonus.h) should be created if not specified otherwise.
Testing
While the project does not require you to submit test programs, creating your own tests is highly encouraged. These tests help validate your implementations and serve as a useful tool during your defense. Develop comprehensive test cases to cover edge cases and standard usage scenarios.

Submission Guidelines
Repository Organization:
All source files and the Makefile must reside in the root directory of your repository.
Grading:
Only the contents of the Git repository will be evaluated. Ensure that file names and project structure strictly follow the guidelines.
Compliance:
The project is evaluated both on the correctness of functions and adherence to technical requirements, including memory management and coding standards.
Contributing
This project is primarily for personal educational purposes. However, if you wish to improve the library or fix issues, feel free to fork the repository and submit pull requests. Your contributions are welcome!

License
This project is for educational purposes and does not include an explicit license.

```yaml
---

Feel free to modify sections (like the repository URL or license informatio
```
