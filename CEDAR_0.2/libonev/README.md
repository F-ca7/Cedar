<font size=5><div align="right"><a href="https://github.com/daseECNU/Cedar/blob/master/CEDAR_0.2/README-English.md">English Version</a></div>
</font>
>Libonev是一个通信库，用于华东师范大学数据科学与工程学院（简称“DaSE”）基于 OceanBase 0.4.2 研发的可扩展的关系数据库Cedar. 2016年2月1日，CEDAR项目组完成了CEDAR 0.1 版本的开发与测试，Libonev 0.1属于模块之一. 2016年9月26日，CEDAR 0.2 版本发布.
>
<h2> 版本特性</h2>
Libonev 0.1 保留原有OceanBase 0.4.2 中的网络接口, 重写网络IO处理框架, 新框架包含以下两个特征:
*  事件驱动模型   基于libev事件驱动的异步非阻塞API，实现网络请求的异步和同步传输功能. 
* 多线程处理IO   采用线程池管理所线程.


<a href="https://github.com/daseECNU/Cedar/blob/master/CEDAR_0.2/doc/CEDAR_doc/CEDAR%20%E5%8A%9F%E8%83%BD%E5%BC%80%E5%8F%91%E6%89%8B%E5%86%8C.pdf" target="_blank">《CEDAR 功能开发手册》</a>包含从开发需求、功能、设计思路、应用局限性等方面对Libonev模块进行的介绍。


##联系我们
研发团队：华东师范大学数据科学与工程学院 CEDAR项目组。

地址：上海市普陀区中山北路3663号。

邮政编码：200062。

联系邮箱：cedar.tp@gmail.com。

对于文档内容有任何疑问，可通过邮件与我们联系，我们收到后将给予您反馈。