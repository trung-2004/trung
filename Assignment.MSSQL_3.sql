create table KhachHang(
   ten nvarchar(255) not null,
   soCMT varchar(15) primary key,
   diachi ntext
);

create table DangKy(
   soThueBao varchar(20) primary key,
   loaiThueBao nvarchar(255) not null,
   ngayDangKy date not null check(ngayDangKy <= getdate()) default getdate(),
   soCMT varchar(15) not null foreign key references KhachHang(soCMT)
);