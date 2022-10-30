create table NHACUNGCAP(
   MaNhaCC varchar(20) primary key,
   TenNhaCC nvarchar(255) not null,
   DiaChi ntext not null,
   SoDT varchar(15) not null,
   MaSoThue varchar(20) not null
);

create table LOAIDICHVU(
   MaLoaiDV varchar(20) primary key,
   TenLoaiDV nvarchar(255) not null
);

create table MUCPHI(
   MaMP varchar(20) primary key,
   DonGia decimal(12,4) not null check(DonGia >= 0),
   MoTa ntext
);

create table DONGXE(
   DongXe varchar(50) primary key,
   HangXe nvarchar(255) not null,
   SoChoNgoi int not null check(SoChoNgoi > 0)
);

create table DANGKICUNGCAP(
   MaDKCC varchar(20) primary key,
   MaNhaCC varchar(20) not null foreign key references NHACUNGCAP(MaNhaCC),
   MaLoaiDV varchar(20) not null foreign key references LOAIDICHVU(MaLoaiDV),
   DongXe varchar(50) not null foreign key references DONGXE(Dongxe),
   MaMP varchar(20) not null foreign key references MUCPHI(MaMP),
   NgayBatDauCungCap date not null check(NgayBatDauCungCap <= getdate()) default getdate(),
   NgayKetThucCungCap date not null,
   SoLuongXeDangKy int not null check(SoLuongXeDangKy > 0)
);

