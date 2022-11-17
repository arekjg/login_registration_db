# Login & Registration System with database

Simple Windows Forms application. It uses database with users' data and checks validity of inputted data. It allows registration and logging in.  

### Welcome Form
![welcomeForm](images/welcomeForm.png)  

### Registration Form
![registrationForm](images/registrationForm.png)  

### Login Form
![loginForm](images/loginForm.png)  

All data is stored in database with 1 table 'users'.  
Schema of the table:  
| Column   | Data Type | Size |
|----------|-----------|------|
| Id       | int       | 4    |
| name     | varchar   | 50   |
| email    | varchar   | 50   |
| phone    | varchar   | 50   |
| addres   | varchar   | max  |
| password | varchar   | max  |
