CREATE TABLE [dbo].[users]
(
	[Id] INT NOT NULL PRIMARY KEY IDENTITY, 
    [name] VARCHAR(50) NOT NULL, 
    [email] VARCHAR(50) NOT NULL UNIQUE, 
    [phone] VARCHAR(50) NULL, 
    [address] VARCHAR(MAX) NULL, 
    [password] VARCHAR(MAX) NOT NULL
)
