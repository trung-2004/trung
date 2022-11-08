insert into Nguoi(hoVaTen, diaChi, ngaySinh)
values (N'Nguyễn Văn An', N'111 Nguyễn Trãi, Thanh Xuân, Hà Nội', '1987-11-18');

insert into DienThoai(SoDT, maNguoi)
values ('987654321', '1'),
('09873452','1'),
('09832323','1'),
('09434343','1');


-- bài 4
select * from Nguoi;
select * from DienThoai;
-- bài 5
select * from Nguoi order by hoVaTen asc;
select SoDT from DienThoai where maNguoi in 
(select id from Nguoi where hoVaTen like N'Nguyễn Văn An');
select hoVaTen from Nguoi where ngaySinh like '2012-12-09';
-- bài 6
select count(*) as SoDienThoai from DienThoai group by maNguoi;
select count(*) as NguoiDung from Nguoi where month(ngaySinh) like '12';
select * from DienThoai a 
inner join Nguoi b on a.maNguoi = b.id;
select * from Nguoi where id in
(select maNguoi from DienThoai where SoDT like '123456789');