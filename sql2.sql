create DATABASE SMS

SHOW DATABASES;

USE SMS;

DROP TABLE IF EXISTS customermaster

create TABLE customermaster(
    customerid VARCHAR(6) primary key,
    name varchar(25),
    companyname varchar(25),
    address varchar(25),
    telephone int
);

insert into customermaster values("1","abc","lanet","surat",989596325);
insert into customermaster values("2","xyz","vibgyor","vapi",785693244);
insert into customermaster values("3","pqr","sns","kim",785241236);

commit;

#drop database SMS

-------------------------------------

create DATABASE HRMS;



USE HRMS;

DROP TABLE IF EXISTS client;

create table client(
    cid VARCHAR(5) primary key,
    cname varchar(35),
    curl varchar(50),
    cdesc varchar(255)
);


insert into client values("1","abc","abc.com","bdkdkhdh hgeuf ddkgeuigf");
insert into client values("2","xyz","xyz.com","qewrte gfgfh bmnc");
insert into client values("3","mnq","mnq.com","pooiuv fdgsh werq");


COMMIT;

----------------------------------------------------
show TABLES;


#drop database HRMS


create database sale;

use sale;

create TABLE customermaster(
    customerid VARCHAR(6) primary key,
    name varchar(25),
    companyname varchar(25),
    address varchar(100),
    telephone int
);



create TABLE companymaster(
    companyid VARCHAR(6) primary key,
    name varchar(25),
    address varchar(75),
    contactperson varchar(100),
    payterm varchar(100)
);


create table categorymaster(
categoryid varchar(6) primary key,
name varchar(25));

create table Schememaster(
schemeid varchar(6),
description varchar(25));



create TABLE employeemaster(
    employeeid VARCHAR(6) primary key,
    name varchar(25),
    designation varchar(25),
    managerid varchar(6)
);




create TABLE productmaster(
    productid VARCHAR(6) primary key,
    name varchar(25),
    companyid varchar(6),
    categoryid varchar(6),
    schemeid varchar(6),
    cost dec(7,2),
    foreign key (companyid) references companymaster(companyid),
    foreign key (categoryid) references categorymaster(categoryid)
);



create TABLE transactionmaster(
    transactionid VARCHAR(6) primary key,
    customerid varchar(6),
    employeeid varchar(6),
    transactiondate date,
    deliverydate date,
    amount dec(7,2),
	foreign key (customerid) references customermaster(customerid),
    foreign key (employeeid) references employeemaster(employeeid)
);



describe customermaster;

show databases;



#create database HRMS;

use HRMS;
drop table client;

create table client(
    clntid VARCHAR(5) primary key,
    cname varchar(35),
    curl varchar(50),
    cdesc varchar(255)
);


create table clntaddr(
    clntaddrid VARCHAR(6) primary key,
    clntid VARCHAR(6),
    clntaddrtype varchar(20),
    clntaddr1 varchar(50),
    clntaddr2 varchar(50),
    clntcity varchar(35),
    clntstate varchar(35),
    clntcountry varchar(25),
    clntzip varchar(25),
    foreign key (clntid) references client(clntid)
);


#drop table clntcontmod;
create table clntcontmod(
	clntcontid VARCHAR(6) primary key,
    clntaddrid VARCHAR(6),
    conttype varchar(25),
    contdata varchar(50),
    foreign key (clntaddrid) references clntaddr(clntaddrid)
);



create table candidate(
    candid VARCHAR(6) primary key,
    candfname VARCHAR(35),
    candmname VARCHAR(35),
    candlname VARCHAR(35),
    candfathername VARCHAR(35),
    candmartialstatus VARCHAR(6),
    candbirthdate date,
    candbirthplace VARCHAR(35),
    candreligion varchar(35),
    candsalexp dec(10,2),
    candemail varchar(50),
    candtotexp dec(8,2)
);




create table candaddr(
    candaddrid VARCHAR(6) primary key,
    candid VARCHAR(6),
    candaddr1 varchar(50),
    candaddr2 varchar(50),
    candcity varchar(35),
    candstate varchar(35),
    candcountry varchar(25),
    candzip varchar(25),
    candtel int,
    candmob int,
    foreign key (candid) references candidate(candid)
);



create table candqual(
    qualid VARCHAR(6) primary key,
    candid VARCHAR(6),
    qualtype varchar(15),
    examname varchar(50),
    institutionname varchar(50),
    boardname varchar(50),
    yearofpassinng int,
    class varchar(20),
    remarks varchar(255),
	
);



use sale;



insert into customermaster values("1","abc","lanet","surat",989596325);
insert into customermaster values("2","xyz","vibgyor","vapi",785693244);
insert into customermaster values("3","pqr","sns","kim",785241236);
insert into customermaster values("4","sma",'null',"vapi",78596321);
insert into customermaster values("5","req","red","null",78563214);


select * from customermaster;



delete from customermaster where customerid = "4";



use hrms;
select * from candaddr;

commit;
describe clntaddr;
insert into clntaddr values("cla1","1","official","wer","bnm","mumbai","maharastra","india","40087");
insert into clntaddr values("cla2","2","home","ert","rewt","delhi","delhi","india","40075");
insert into clntaddr values("cla3","3","official","rty","oijk","lucknow","up","india","40867");

describe clntcontmod;
commit;


insert into clntcontmod values("ct1","cla1","phone","78695645");
insert into clntcontmod values("ct2","cla2","email","xyz@gmail.com");
insert into clntcontmod values("ct3","cla3","fax","22891064");


describe candidate;
commit;

insert into candidate values("can1","a","b","c","d","yes","1981-01-03","mumbai","hindu",75000,"abc@gmail.com",3);
insert into candidate values("can2","l","m","n","o","no","1987-06-23","surat","jew",120000,"lmn@gmail.com",1);
insert into candidate values("can3","p","q","r","s","yes","1992-12-13","delhi","jain",225000,"pqr@gmail.com",2);

describe candaddr;
insert into candaddr values("cna1","can1","sma plaza","godadara","surat","gujarat","india","40067",78945685,78965421);
insert into candaddr values("cna2","can2","GU","navrangpura","ahmedabad","gujarat","india","43967",85964521,6325985);
insert into candaddr values("cna3","can3","jim plaza","kadodara","surat","gujarat","india","42330",96521382,8959654);

describe candqual;
commit;
insert into candqual values("qua1","can1","academic","moc","GU","gujarat","1998","first","very good");
insert into candqual values("qua2","can2","professional","ba","VNSGU","gujarat","1998","second","average");
insert into candqual values("qua3","can3","technical","pgdca","GANPAT","gujarat","1998","third","needs improvement");

select candbirthdate from candidate;

select * from clntaddr;

select qualid,examname,boardname from candqual;

select * from client;

select * from candqual where yearofpassinng < 2001;

select * from client;
select * from clntaddr;

select * from client;
describe clntaddr;
describe client;
use hrms;

#ALTER TABLE client modify clntid varchar(6);
#alter table client add constraint pk_client primary key(clntid);
#ALTER TABLE clntaddr ADD CONSTRAINT FK_clntid FOREIGN KEY (clntid) REFERENCES client(clntid);


select * from client as c, clntaddr as ca where c.clntid=ca.clntid and ca.clntcity="mumbai";

select * from candqual;


describe candidate;
describe candqual;


#alter table candidate add constraint pk_cand_id primary key(candid);
#alter table candqual add constraint fk_candqual foreign key(candid) references candidate(candid);


update candqual as cq,candidate as cd set cq.yearofpassinng = "2004" where cq.candid=cd.candid and cd.candfname="a";







