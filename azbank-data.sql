create table Customer(
   CustomerId int primary key,
   Name nvarchar(50),
   City nvarchar(50),
   Country nvarchar(50),
   Phone nvarchar(15),
   Email nvarchar(50)
);
create table CustomerAccount(
   AccountNumber char(9) primary key,
   CustomerID int not null foreign key references Customer(CustomerID),
   Balance money not null,
   MinAccount money
);
create table CustomerTransaction(
   TrasactionId int primary key,
   AccountNumber char(9) foreign key references CustomerAccount(AccountNumber),
   TrasactionDate smalldatetime,
   Amount money,
   DepositorWithdraw bit
);
