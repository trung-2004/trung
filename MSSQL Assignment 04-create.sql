create table NguoiChiuTN(
   tenNguoi nvarchar(100) not null,
   masoNguoi varchar(20) primary key 
);
create table LoaiSP(
   tenLoaiSP nvarchar(100) not null,
   maLoaiSP varchar(20) primary key
);
create table SanPham(
   maSP varchar(20) primary key,
   ngaySanXuat date not null check(ngaySanXuat <= getdate()),
   maNguoi varchar(20) not null foreign key references NguoiChiuTN(masoNguoi),
   maLoai varchar(20) not null foreign key references LoaiSP(maLoaiSP)
);

--drop table LoaiSP;
--drop table NguoiChiuTN;
--drop table SanPham;