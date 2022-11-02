create table HangHang(
   ma varchar(20) primary key,
   ten varchar(100) not null,
   diachi text not null,
   dienthoai varchar(15) not null
);
create table SanPham(
   ten nvarchar(100) not null,
   mota ntext,
   donvi nvarchar(50) not null,
   gia decimal(12,4) not null check(gia >= 0) default 0,
   soluong int not null check(soluong > 0),
   id int primary key identity(1,1),
   maHH varchar(20) not null foreign key references HangHang(ma)
);
--drop table SanPham;
--drop table HangHang;