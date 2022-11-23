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
insert into Customer(CustomerId, Name, City, Country, Phone, Email)
values (1, N'Trung', N'Hà Nội', N'Việt Nam', '0359080256', N'trungtv@gmail.com'),
(2, N'Việt', N'Ninh Bình', N'Việt Nam', '0359080267', N'viettv@gmail.com'),
(3, N'Dũng', N'Hải Phòng', N'Việt Nam', '0359080257', N'dungtv@gmail.com');

insert into CustomerAccount(AccountNumber, CustomerID, Balance, MinAccount)
values ('123454367', 1, 200000, 50000),
('123476789', 2, 400000, 60000),
('123457643', 3, 600000, 30000);

insert into CustomerTransaction(TrasactionId, AccountNumber, TrasactionDate, Amount, DepositorWithdraw)
values (1, '123454367', '2020-12-12', 100000, 1000),
(2, '123476789', '2020-06-06', 200000, 10000),
(3, '123457643', '2020-07-06', 300000, 1000);
--4
select * from Customer where City like N'Hà Nội';
--5
select a.Name, a.Phone, a.Email, b.AccountNumber, b.Balance from Customer a 
inner join CustomerAccount b on a.CustomerId = b.CustomerId;
--7
create view VCustomerTransactions as
select a.Name, b.AccountNumber, c.TrasactionDate, c.Amount, c.DepositorWithdraw from Customer a
inner join CustomerAccount b on a.CustomerId = b.CustomerId
inner join CustomerTransaction c on b.AccountNumber=c.AccountNumber
select * from VCustomerTransactions;