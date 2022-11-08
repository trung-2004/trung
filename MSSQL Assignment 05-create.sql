create table Nguoi(
   hoVaTen nvarchar(100) not null,
   diaChi ntext,
   ngaySinh date not null check(ngaySinh <= getdate()),
   id int primary key identity(1,1)
);
create table DienThoai(
   SoDT varchar(15) primary key,
   maNguoi int not null foreign key references Nguoi(id),
);

--drop table DienThoai;
--drop table Nguoi;