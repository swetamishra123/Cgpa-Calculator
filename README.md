
# CGPA Calculator

The **CGPA Calculator** is a C++ program that helps students calculate their Cumulative Grade Point Average (CGPA) based on the grades and credits earned in their courses.

## Table of Contents
- [Features](#features)
- [Prerequisites](#prerequisites)
- [Usage](#usage)
- [Output](Output)
- [Contributing](#contributing)
- [License](#license)


## Features

- Calculate CGPA from course grades and credits.
- Save course details and CGPA to a text file.
- Simple and easy-to-use console application.

## Prerequisites

Before you can use the CGPA Calculator, you need to have the following:

- C++ Compiler (e.g., g++)
- Basic knowledge of C++ programming
- A terminal or command prompt to run the program

## Usage

1. Clone or download this repository to your local machine.

   ```bash
   https://github.com/swetamishra123/Cgpa-Calculator.git
   ```

2. Navigate to the project directory.

   ```bash
   cd Cgpa-Calculator
   ```

3. Compile the C++ program.

   ```bash
   g++ cgpa_calculator.cpp -o cgpa_calculator
   ```

4. Run the program.

   ```bash
   ./cgpa_calculator
   ```

5. Follow the on-screen prompts to enter course details (credits and grades) as required.

6. The program will calculate your CGPA and display it on the console. Additionally, the course details and CGPA will be saved to a file named `cgpa_data.txt`.


## Output
Certainly! Let's walk through the detailed output explanation for the CGPA Calculator program. I'll explain each part of the output and what it means.

Let's assume the user has entered information for three courses:

```
Enter the number of courses: 3
```

For each course, they have entered credits and grades. Here's an example input:

```
Enter credits for course 1: 3
Enter grade for course 1: 4.0
Enter credits for course 2: 4
Enter grade for course 2: 3.5
Enter credits for course 3: 2
Enter grade for course 3: 3.7
```

Now, let's break down the output:

1. **Your Cumulative Grade Point Average (CGPA) is:** This is the main output line, indicating the CGPA result that the program calculated.

2. **3.61 (rounded to two decimal places):** This is the CGPA value that the program computed based on the credits and grades provided. In this example, the CGPA is 3.61.

3. **cgpa_data.txt:** This is the name of the text file where the course details and CGPA will be saved.

Now, if you open the `cgpa_data.txt` file, it will contain the following information:
```
Course 1: Credits = 3, Grade = 4.0
Course 2: Credits = 4, Grade = 3.5
Course 3: Credits = 2, Grade = 3.7
CGPA: 3.61
```

Here's what each line in the `cgpa_data.txt` file means:

- **Course 1:** This indicates the details for the first course.
- **Credits = 3:** It shows that the first course had 3 credit hours.
- **Grade = 4.0:** The user earned a grade of 4.0 for this course.

The same pattern follows for Course 2 and Course 3. Each course is listed with its credits and grade.

- **CGPA: 3.61:** This line indicates the CGPA, which is 3.61 based on the provided course details.

So, the `cgpa_data.txt` file is a record of the user's input and the resulting CGPA.

Please note that this is a simplified example, and in a more comprehensive application, you could enhance the program to handle more features, error-checking, and potentially a user-friendly interface.

## Contributing

If you want to contribute to this project, feel free to fork the repository, make changes, and submit a pull request. Your contributions are greatly appreciated.

1. Fork the repository on GitHub.

2. Clone your forked repository to your local machine.

   ```bash
   https://github.com/swetamishra123/Cgpa-Calculator.git
   ```

3. Create a new branch for your changes.

   ```bash
   git checkout -b feature/your-feature-name
   ```

4. Make your changes, commit them, and push to your repository.

   ```bash
   git commit -m "Add your feature description"
   git push origin feature/your-feature-name
   ```

5. Create a pull request on GitHub, explaining your changes and improvements.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

