--2
insert into TacGia(ten)
values (N'Eran Katz');

insert into NhaXuatBan(ten, diachi)
values (N'Tri Thức', N'53 Nguyễn Du, Hai Bà Trưng, Hà Nội');

insert into LoaiSach(ten)
values (N'Khoa học xã hội');

insert into Sach(ma, ten, ndtt, namXB, lanXB, gia, soluong, maTG, maNXB, maLS)
values (N'B001', N'Trí tuệ Do Thái', N'Bạn có muốn biết: Người Do Thái sáng tạo ra cái gì và nguồn gốc trí tuệ của họ xuất phát từ đâu không? Cuốn sách này sẽ dần hé lộ
những bí ẩn về sự thông thái của người Do Thái, của một dân tộc
thông tuệ với những phương pháp và kỹ thuật phát triển tầng lớp trí
thức đã được giữ kín hàng nghìn năm như một bí ẩn mật mang tính
văn hóa', 2010, 1, 79000, 100, 1, 1, 1);

--3
select * from Sach where namXB > 2008 and namXB < 2022;
--4
select top 10* from Sach order by gia asc;
--5
select * from Sach where ten like N'%Trí tuệ%';
--6
select * from Sach where ten like N'%T%' order by gia desc;
--7
select * from Sach where maNXB in
(select idNXB from NhaXuatBan where ten like N'Tri Thức');
--8
select * from NhaXuatBan where idNXB in
(select maNXB from Sach where ten like N'Trí tuệ Do Thái');
--9
select a.ma, a.ten, a.namXB as NamXuatBan, b.ten as NhaXuatBan, c.ten as LoaiSach from Sach a 
inner join NhaXuatBan b on a.maNXB = b.idNXB
inner join LoaiSach c on a.maLS = c.idLS;
--10
select top 1 ten from Sach order by gia desc;
--11
select top 1 ten from Sach order by soluong desc;
--12
select ten from Sach where maTG in
(select idTG from TacGia where ten like N'Eran Katz');
--13
update Sach set gia = gia - gia*15/100 where namXB <= 2008;
select * from Sach;
--14
select b.ten, count(a.ten) as SoDauSach from Sach a
inner join NhaXuatBan b on a.maNXB = b.idNXB 
group by b.ten;
--15
select b.ten, count(a.ten) as SoDauSach from Sach a
inner join LoaiSach b on a.maNXB = b.idLS 
group by b.ten;
--16
create index ten_index on Sach(ten);
--17
create view s_tg_nxb as
select a.ma as MaSach, a.ten as TenSach, b.ten as TacGia, c.ten as NhaXuatBan, a.gia as Gia from Sach a 
inner join TacGia b on a.maTG = b.idTG
inner join NhaXuatBan c on a.maNXB = c.idNXB;
select * from s_tg_nxb;
--18
create procedure proc_s @m varchar(20), @t nvarchar(255), @ndtt ntext, @nxb int, @lxb int, @g decimal(12,4), @sl int, @mtg int, @mnxb int, @mls int as
insert into Sach(ma, ten, ndtt, namXB, lanXB, gia, soluong, maTG, maNXB, maLS)
values (@m, @t, @ndtt, @nxb, @lxb, @g, @sl, @mtg, @mnxb, @mls);
select * from Sach;
exec proc_s @m = N'B003', @t = N'Ngu không biết mình ngu', @ndtt = null, @nxb = 1990, @lxb = 3, @g = 12345, @sl = 200, @mtg = 1, @mnxb = 1, @mls = 1;

create procedure proc_tk @t nvarchar(255) as
select ma, ten, ndtt, namXB, lanXB, gia, soluong from Sach where lower(ten) like '%' + lower(@t) + '%'
order by ten asc;
exec proc_tk 'Thái';

create procedure proc_lk as
select * from Sach order by ma asc;
exec proc_lk;
