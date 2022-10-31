-- liệt kê
select * from SanPham;
select ten as productName,donvi as unit,gia as price from SanPham;-- đổi dữ liệu(vd đổi tên cột)
-- lọc
select * from SanPham where gia > 100 and gia < 1000;
select * from SanPham where gia >= 100 or donvi like N'Chiếc';
select * from SanPham where id = 1049 or id = 1 or id = 1050;
select * from SanPham where id in (1049,1050,1051,12,32,435,54);
-- tìm kiếm
select * from SanPham where ten like 'Máy%';-- start of Máy
select * from SanPham where ten like '%450';-- end of 450
select * from SanPham where ten like '%t%';-- contain
-- sắp xếp
select * from SanPham order by gia asc;-- sắp xếp từ thấp đến cao
select * from SanPham order by gia desc;
-- lấy theo số lượng
select top 1 * from SanPham order by gia desc;-- lấy đúng 1 
select top 40 percent * from SanPham order by gia desc;-- lấy 1 nửa
select top 1 * from DonHang order by tongtien desc;
-- thống kê
select count(*) from DonHang;
select count(*) from SanPham;
select sum(tongtien) as doanhthu from DonHang;-- tổng 
select avg(tongtien) as trungbinh from DonHang;-- trung bình
select * from DonHang;
select count(*), dienthoai from DonHang group by dienthoai;--tìm xem 1 số điện thoại có bao nhiêu đơn hàng
select sum(tongtien) as tongtien, dienthoai from DonHang group by dienthoai;
select avg(tongtien) as trungbinh, dienthoai from DonHang group by dienthoai;