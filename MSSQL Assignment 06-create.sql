create table Sach(
   ma varchar(20) primary key,
   ten nvarchar(255) not null,
   ndtt ntext,
   namXB int not null check(namXB <= 2022),
   lanXB int not null check(lanXB > 0),
   gia decimal(12,4) not null check(gia >= 0),
   soluong int not null check(soluong >= 0),
   maTG int not null foreign key references TacGia(idTG),
   maNXB int not null foreign key references NhaXuatBan(idNXB),
   maLS int not null foreign key references LoaiSach(idLS),
);

create table TacGia(
   ten nvarchar(255) not null,
   idTG int primary key identity(1,1)
);

create table NhaXuatBan(
   ten nvarchar(255) not null,
   diachi ntext,
   idNXB int primary key identity(1,1)
);

create table LoaiSach(
   ten nvarchar(255) not null,
   idLS int primary key identity(1,1)
);

drop table Sach;
drop table TacGia;
drop table NhaXuatBan;
drop table LoaiSach;