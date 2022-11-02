insert into HangHang(ma, ten, diachi, dienthoai)
values ('123', 'Asus', 'USA', '983232');

insert into SanPham(ten, mota, donvi, gia, soluong, maHH)
values (N'Máy Tính T450', N'Máy nhập cũ', N'Chiếc', 1000, 10, '123'),
(N'Điện Thoại Nokia5670', N'Điện thoại đang hot', N'Chiếc', 200, 200, '123'),
(N'Máy In Samsung 450', N'Máy in đang loại bình', N'Chiếc', 100, 10, '123');

select ten as hanghang from HangHang;-- bài 4a
select ten as sanpham from SanPham;-- bài 4b
select ten from HangHang order by ten desc;-- bài 5a
select ten from SanPham order by gia desc;-- bài 5b
select * from HangHang where ten = 'Asus';-- bài 5c
select ten from SanPham where soluong < 11;-- bài 5d
select count(*) from HangHang;-- bài 6a
select count(*) from SanPham;-- bài 6b
select count(*) from SanPham where maHH = '123';-- bài 6c
select count(*) from SanPham group by maHH;-- bai6d
