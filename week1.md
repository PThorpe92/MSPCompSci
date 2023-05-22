# Binary, memory and basic introduction to data types

In computers, binary is used to represent data and instructions by encoding them as sequences of 0s and 1s. Data is stored in memory in binary form, with each byte of memory containing 8 bits, which can represent 256 different values (2^8). Each bit can be either 0 or 1, and these values are used to represent different types of data such as numbers, characters, or instructions. The computer's processor reads these binary values from memory and performs operations on them to carry out the program's instructions. Understanding binary is a fundamental concept in computer programming and is essential for anyone learning to program at any level.

# How to read binary
<- 0-   0  -  0  - 0  - 0  - 0 - 0 - 0 - 0 - 0
<- etc, 256  128  64   32   16   8   4   2   1

so we can see, that with only 1 byte (8 bits) we can represent 255 different numbers.
(1 + 2 + 4 + 8 + 16 + 32 + 64 + 128)

When a program is executed by a computer, it goes through several stages to perform its operations. Here's a simplified explanation of how this works:

    Compilation/Interpretation: First, the program code is either compiled or interpreted into machine code, which consists of a series of instructions that the computer can understand and execute.

    Memory Allocation: When the program is executed, the computer allocates two main areas in memory for it: the stack and the heap.

    Stack: The stack is a section of memory that is used for temporary storage of data during the execution of the program. It is organized as a last-in, first-out (LIFO) data structure, meaning that the most recently added data is the first to be removed. The stack is used for keeping track of function calls, local variables, and other temporary data.

    Heap: The heap is a section of memory that is used for storing data that needs to persist beyond the lifetime of a function or block. The heap is more flexible than the stack, and data can be allocated and deallocated in any order.

    Execution: As the program executes, it reads the machine code instructions from memory and performs the corresponding operations. The program uses the stack and the heap to store and manipulate data, and the computer's processor executes the instructions in the correct order to produce the desired output.

When a function is called, its local variables are pushed onto the stack, and when the function returns, they are popped off the stack. This means that the stack is automatically managed by the program, and memory is allocated and deallocated automatically as functions are called and return.

The heap, on the other hand, is a section of memory that is used for more long-term storage of data. Memory is allocated on the heap using functions such as malloc() or new(). Unlike the stack, memory on the heap is not automatically managed by the program, and it must be manually allocated and deallocated using these functions. This makes the heap more flexible than the stack, but also more prone to errors such as memory leaks or segmentation faults.

Programs can access memory on the stack and the heap in different ways. Accessing memory on the stack is generally faster than accessing memory on the heap, since the stack is organized in a simple LIFO structure. However, the stack has a limited size, and allocating too much memory on the stack can cause stack overflow errors. In contrast, accessing memory on the heap is slower but more flexible, and there is no limit to the amount of memory that can be allocated.

When a program relies on memory allocated on the stack or the heap, it is important to manage the allocation and deallocation of memory carefully to prevent errors. If memory on the heap is not properly deallocated, it can lead to memory leaks and other issues. Similarly, if a program tries to access memory on the stack that has already been deallocated, it can cause segmentation faults and other errors. Overall, understanding how memory allocation works is an important part of writing efficient and error-free programs.

In programming, there are generally 6 different data types. Integers: Integers represent whole numbers without any decimal places. They can be either positive or negative. In programming, integers are usually represented using a fixed number of bits (such as 32 or 64 bits) to determine the range of values that can be stored. 18764 < integer

    Floating-point numbers: Floating-point numbers represent real numbers with decimal places. They can be either positive or negative. In programming, floating-point numbers are usually represented using the IEEE 754 standard, which defines a set of rules for representing and manipulating them.  431.029513  < float

    Characters: Characters represent individual letters, digits, or symbols. In programming, characters are usually represented using the ASCII or Unicode encoding schemes, which assign unique codes to each character.  'a' < char or rune 

    Booleans: Booleans represent true or false values. They are used for making logical decisions in programming, such as in conditional statements and loops. true < bool

    Strings: Strings represent a sequence of characters. They are used for storing and manipulating text data in programming. "foo"  < string

    Arrays: Arrays represent a collection of values of the same data type. They are used for storing and accessing multiple values using a single variable. ["foo", "bar", "baz"]

# String / Letter Types
ASCII (American Standard Code for Information Interchange) is a character encoding scheme used to represent text characters in computers. In ASCII, each character is represented by a unique 7-bit code, which allows for the encoding of up to 128 different characters, including letters, numbers, and symbols.

Each ASCII character is encoded as a sequence of 7 bits, with the eighth bit reserved for error detection or parity checking. These 7-bit ASCII codes are then stored in memory as a series of bytes, with one byte representing one character.

When a program needs to read or manipulate ASCII characters, it reads the binary values from memory and translates them back into the corresponding characters using an ASCII table or lookup table. Conversely, when a program needs to store ASCII characters in memory, it converts them into their corresponding binary values and writes those values to memory.

# Number types

Ints or integers can be either positive or negative and are usually represented using a fixed number of bits to determine the range of values that can be stored. For example, a 32-bit integer can store values between -2,147,483,648 and 2,147,483,647.

Floats, short for floating-point numbers, are data types used to represent real numbers with decimal places. They can also be either positive or negative and are usually represented using the IEEE 754 standard, which defines a set of rules for representing and manipulating them. Floats can store a wider range of values than ints, but they are less precise because they have limited number of bits for storing the decimal places. This means that operations on floats may have rounding errors.

The main difference between floats and ints is that floats can represent decimal places and fractions, while ints cannot. Floats are often used in scientific or mathematical calculations where precision is not a primary concern. Ints are often used for counting, indexing, and other tasks that require only whole numbers.

# Boolean logic

In programming, a boolean is a data type that represents a binary value that can be either true or false. Booleans are used for making logical decisions in programming, such as in conditional statements and loops.

Boolean logic is a type of algebra that deals with binary values and logical operations. It involves three basic logical operators: AND, OR, and NOT.

The AND operator returns true only if both operands are true. For example, in the expression (A AND B), both A and B must be true for the expression to be true.

The OR operator returns true if either operand is true. For example, in the expression (A OR B), either A or B (or both) must be true for the expression to be true.

The NOT operator returns the opposite of the operand. For example, in the expression (NOT A), if A is true, the expression evaluates to false; if A is false, the expression evaluates to true.

Boolean logic can be used to build complex logical expressions by combining multiple logical operators and operands. For example, the expression ((A AND B) OR (NOT C)) evaluates to true if A and B are both true, or if C is false.

Overall, understanding boolean types and basic boolean logic is essential for writing code that makes logical decisions and performs conditional operations based on the evaluation of binary values. Many times boolean logic will be represented with something called an "if statement"

if (something is true) {
    do(some_action())
} else {
    do(some_other_action() )
}

