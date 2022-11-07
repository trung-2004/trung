insert into NguoiChiuTN(tenNguoi, masoNguoi)
values (N'Nguyễn Văn An', '987688');

insert into LoaiSP(tenLoaiSP, maLoaiSP)
values (N'Máy tính sách tay Z37', 'Z37E');

insert into SanPham(maSP, ngaySanXuat, maNguoi, maLoai)
values ('Z37 111111', '2012-09-12', '987688', 'Z37E');

-- bài 4
select * from LoaiSP;
select * from SanPham;
select * from NguoiChiuTN;
-- bài 5
select * from LoaiSP order by tenLoaiSP asc;
select * from NguoiChiuTN order by tenNguoi asc;
select * from SanPham where maLoai in
(select maLoaiSP from LoaiSP where maLoaiSP like 'Z37E');
select * from SanPham where maNguoi in
(select masoNguoi from NguoiChiuTN where tenNguoi like N'Nguyễn Văn An') order by maSP desc;
-- bài 6
select count(*) as sosanpham from SanPham;
select * from SanPham a inner join LoaiSP b
on a.maLoai = b.maLoaiSP;
select * from SanPham a 
inner join LoaiSP b on a.maLoai = b.maLoaiSP
inner join NguoiChiuTN c on a.maNguoi = c.masoNguoi;
