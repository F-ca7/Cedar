Cedar是华东师范大学数据科学与工程研究院基于 OceanBase 0.4.2 研发的可扩展的关系数据库。2016年2月1日，Cedar 0.1 版本发布，2016年9月26日，Cedar 0.2 版本发布。相较于OceanBase 0.4.2 版本的数据库系统，Cedar系统更加稳定，功能更加丰富。

<h2> 版本特性</h2>
Cedar 0.1 版本新增的功能有：

* 高可用的三集群架构（集群间选主、集群角色自动切换、日志强同步及恢复等机制）
* 多线程网络IO处理框架Libonev
* 游标
* 存储过程
* 二级索引
* 非主键多行更新
* 半连接

Cedar 0.2 版本新增的功能有：
* SNAPSHOT ISOLATION 隔离级别
* 表锁
* 基于布隆过滤器的连接
* 日志同步优化

合计11个功能模块，每个功能模块都有相应的文档，存放在“Cedar 0.1”和“Cedar 0.2”目录下，文档详细地从开发需求、功能、设计思路、应用局限性等不同方面对每个功能模块进行了全面、具体的介绍。

<h2>Cedar 开源地址如下：</h2>
<ul>
<li>
  <p>Cedar 源码：<a href="https://github.com/daseECNU/Cedar" target="_blank">https://github.com/daseECNU/Cedar</a></p>
</li>
<li>
  <p>Cedar libonev RPM包：<a href="https://github.com/daseECNU/Cedar/tree/master/Cedar_0.2/rpm“
  target="_blank">libonev-0.1-1.x86_64.rpm</p>
</li>
<li>
  <p>Cedar 文档：<a href="https://github.com/daseECNU/Cedar/tree/master/Cedar_0.2/doc“
  target="_blank">https://github.com/daseECNU/Cedar/tree/master/Cedar_0.2/doc</p>
</li>
</ul>

##联系我们
研发团队：华东师范大学数据科学与工程研究院Cedar项目组。

地址：上海市普陀区中山北路3663号。

邮政编码：200062。

对于文档内容有任何疑问，可通过发送邮件至cedar.tp@gmail.com，与我们联系，我们会在第一时间给予您反馈。