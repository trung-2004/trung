create table KhacHang(
   ten nvarchar(100) not null,
   diachi ntext not null,
   dienthoai varchar(15) primary key
);

create table SanPham(
   ten nvarchar(255) not null,
   donvi nvarchar(50) not null,
   mota ntext,
   gia decimal(12,4) not null check(gia >= 0) default 0,
   id integer primary key identity(1,1) --(identity) dành cho khóa chính dùng để tự tăng số lượng
);

create table DonHang(
   ma varchar(20) primary key,
   ngaydat date not null check(ngaydat <= getdate()) default getdate(),
   tongtien decimal(12,4) not null check(tongtien >= 0),
   dienthoai varchar(15) not null foreign key references KhacHang(dienthoai)
);

create table DonHang_SanPham(
   maDH varchar(20) not null foreign key references DonHang(ma),
   spit integer not null foreign key references SanPham(id),
   soluong integer not null check(soluong > 0),
   thanhtien decimal(12,4) not null check(thanhtien >= 0)
);

drop table DonHang_SanPham;
drop table DonHang;
drop table SanPham;
drop table KhacHang;