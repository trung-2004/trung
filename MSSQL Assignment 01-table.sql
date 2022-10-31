insert into KhacHang(ten,diachi,dienthoai)
values(N'Nguyễn Văn An',N'111 Nguyễn Trãi, Thanh Xuân, Hà Nội','0987654321')--kiểu dữ liệu number ko cần nháy đơn
select * from KhacHang;
insert into SanPham(ten,donvi,mota,gia)
values(N'Máy tính T450',N'Chiếc',N'Máy nhập mới',1000),
(N'Điện thoại Nokia5670',N'Chiếc',N'Điện thoại đang hot',200),
(N'Máy in Samsung 450',N'Chiếc',N'Máy in đang ế',100);
select * from SanPham;
insert into DonHang(ma,ngaydat,tongtien,dienthoai)
values('123','2022-10-25',1500,'0987654321'),
('124','2022-10-25',1500,'0987654321');
select * from DonHang
insert into DonHang_SanPham(maDH,spit,soluong,thanhtien)
values('123',1040,1,1,1000);
select * from DonHang_SanPham

delete DonHang_SanPham;
delete DonHang;
delete SanPham;
delete KhacHang;

update SanPham set gia = gia + 150 where id = 1049;