create table BoPhan(
   tenBP nvarchar(255) not null,
   maBP varchar(20) primary key
);

create table ThietBi(
   tenTB nvarchar(255) not null,
   maTB varchar(20) primary key,
   soluong int not null check(soluong > 0)
);

create table NhanVien(
   tenNV nvarchar(100) not null,
   ngaysinh date not null check(ngaysinh < getdate()),
   BangCap nvarchar(100) not null,
   mucluong decimal(12,4) not null check(mucluong >= 0),
   diachi ntext not null,
   dienthoai varchar(15) primary key,
   maBP varchar(20) not null foreign key references BoPhan(maBP)
);

create table NhanVien_ThietBi(
   maNV varchar(15) not null foreign key references NhanVien(dienthoai),
   maTB varchar(20) not null foreign key references ThietBi(maTB)
);