

# HTTP Server

##  云服务器压力测试

### 测试环境

* 内存：2G
* 操作系统： Ubuntu 18.04
* CPU: 2核
* 带宽限制： 1Mbps

### 测试过程

* 浏览器URL输入 ip:port ，访问服务器
* 用压力测试工具webbench



|  服务器   | 客户端数 | QPS  |
| :-------: | :------: | :--: |
| webserver |   1000   | 168  |
| webserver |   5000   | 207  |
| webserver |  10000   | 176  |

* 测试结果

  <img src="G:\workspace\myServer\myServer\README.assets\image-20210619213035656.png" alt="image-20210619213035656" style="zoom:80%;" />

<img src="G:\workspace\myServer\myServer\README.assets\image-20210619213552170.png" alt="image-20210619213552170" style="zoom:80%;" />
