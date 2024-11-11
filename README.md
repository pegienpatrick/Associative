# Associative

It is an associative array like python dictionary implemented in C++. It enables data to be stored as shown below in C++.

```cpp
associative student;

student["patrick"] = 98.0;
student["Joan"] = 99;
student["James"] = 50.8;
student["Dennis"] = 78.9;
student["lawrence"] = 67.8;
student["Mercy"] = 67.9;
student["eliphas"] = 98.7;
student["eva"] = 40.0;

student["eva"] += 20;

student["patrick"] = 85.5;
student["Mercy"] += 5.2;

//To get the data
string names[] = {"patrick", "Joan", "James", "Dennis", "lawrence", "Mercy", "eliphas", "eva"};

for (string me : names) {
    cout << "\n\nMarks for " << me << " is " << student[me];
}
```

The result of the above will be:

```

$ ./main

Marks for patrick is 85.5
Marks for Joan is 99
Marks for James is 50.8
Marks for Dennis is 78.9
Marks for lawrence is 67.8
Marks for Mercy is 73.1
Marks for eliphas is 98.7
Marks for eva is 60

```
To compile, use the following command:


```
$ g++ *.cpp -o main
```

To run the program, use the following command:

```shell
$ ./main
```
