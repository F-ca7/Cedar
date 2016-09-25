<font size=5><div align="right"><a href="https://github.com/daseECNU/Cedar/blob/master/CEDAR_0.2/README-English.md">English Version</a></div>
</font>
>CEDAR是华东师范大学数据科学与工程学院（简称“DaSE”）基于 OceanBase 0.4.2 研发的可扩展的关系数据库。2016年2月1日，CEDAR项目组完成了CEDAR 0.1 版本的开发与测试，2016年9月26日，CEDAR 0.2 版本发布。
>
<h2> 版本特性</h2>
CEDAR在OceanBase 0.4.2 的基础上新增了如下12个功能模块：

CEDAR 0.1 版本新增的功能有：


* 高可用的三集群架构（集群间选主、集群角色自动切换、日志强同步及恢复等机制）
* 多线程网络IO处理框架Libonev
* 游标
* 存储过程
* 二级索引
* 非主键多行更新
* 半连接

CEDAR 0.2 版本新增的功能有：
* SNAPSHOT ISOLATION 隔离级别
* 表锁
* 基于布隆过滤器的连接
* 可扩展的事务提交优化
* 日志同步优化

<a href="https://github.com/daseECNU/Cedar/blob/master/CEDAR_0.2/doc/CEDAR_doc/CEDAR%20%E7%94%A8%E6%88%B7%E4%BD%BF%E7%94%A8%E6%8C%87%E5%8D%97.pdf" target="_blank">《CEDAR 用户使用指南》</a>介绍了如何安装、部署集群、如何进行SQL操作。<a href="https://github.com/daseECNU/Cedar/blob/master/CEDAR_0.2/doc/CEDAR_doc/CEDAR%20%E5%8A%9F%E8%83%BD%E5%BC%80%E5%8F%91%E6%89%8B%E5%86%8C.pdf" target="_blank">《CEDAR 功能开发手册》</a>从开发需求、功能、设计思路、应用局限性等方面对每个功能模块进行了介绍。


<h2>CEDAR 开源地址如下：</h2>
<ul>
<li>
  <p>CEDAR 源码：<a href="https://github.com/daseECNU/Cedar/tree/master/CEDAR_0.2" target="_blank">https://github.com/daseECNU/Cedar/tree/master/CEDAR_0.2 </a></p>
</li>
<li>
  <p>Libonev 源码：<a href="https://github.com/daseECNU/Cedar/tree/master/CEDAR_0.2/libonev" target="_blank">https://github.com/daseECNU/Cedar/tree/master/CEDAR_0.2/libonev </a></p>
</li>
<li>
  <p>CEDAR libonev RPM包：<a href="https://github.com/daseECNU/Cedar/tree/master/CEDAR_0.2/rpm" target="_blank">libonev-0.1-1.x86_64.rpm</a></p>
</li>
<li>
  <p>CEDAR 文档：</p>
  <p><a href="https://github.com/daseECNU/Cedar/tree/master/CEDAR_0.2/doc/CEDAR_doc" target="_blank">https://github.com/daseECNU/Cedar/tree/master/CEDAR_0.2/doc/CEDAR_doc </a></p>
</li>
</ul>

##联系我们
研发团队：华东师范大学数据科学与工程学院 CEDAR项目组。

地址：上海市普陀区中山北路3663号。

邮政编码：200062。

联系邮箱：cedar.tp@gmail.com。

对于文档内容有任何疑问，可通过邮件与我们联系，我们收到后将给予您反馈。