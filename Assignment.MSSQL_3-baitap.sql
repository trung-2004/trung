insert into KhachHang(ten, soCMT, diachi)
values (N'Nguyễn Nguyệt Nga', '123456789', N'Hà Nội');

insert into DangKy(soThueBao, loaiThueBao, ngayDangKy, soCMT)
values ('123456789', N'Trả trước', '2012-02-12', '123456789');
-- bài 4
select * from KhachHang;
select * from DangKy;
-- bài 5
select * from DangKy where soThueBao like '123456789';
select * from KhachHang where soCMT like '123456789';
select soThueBao from DangKy where soCMT like '123456789';
select soThueBao from DangKy where ngayDangKy like '2012-02-12';
select soThueBao from DangKy where soCMT in
(select soCMT from KhachHang where diachi like N'Hà Nội');
-- bài 6
select count(*) as KhachHang from KhachHang;
select count(*) as soThueBao from DangKy;
select count(*) as soThueBao from DangKy where ngayDangKy like '2012-02-12';
select * from KhachHang a inner join DangKy b
on a.soCMT = b.soCMT;