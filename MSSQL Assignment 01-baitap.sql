-- b�i 4
select ten as danhSachKhachHang from KhacHang;
select ten as danhSachSanPham from SanPham;
select ma as danhSachDonHang from DonHang;
-- b�i 5
select ten as danhSachKhachHang from KhacHang order by ten asc;
select ten as danhSachSanPham from SanPham order by gia desc;
--select ten as sanPhamDaMua from SanPham ;
-- b�i 6
select count(*) as soKhachHang from KhacHang group by ten;
select count(*) as soSanPham from SanPham;
select sum(tongtien) as tongSoTien from DonHang group by ma;