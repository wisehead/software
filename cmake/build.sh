#############################################################
#   File Name: build.sh
#     Autohor: Hui Chen (c) 2019
#        Mail: chenhui13@baidu.com
# Create Time: 2019/04/30-14:06:31
#############################################################
#!/bin/sh 
do_cmd cd ${src_path}/utils
do_cmd tar -zxvf cmake-2.8.12.2.tar.gz
do_cmd cd cmake-2.8.12.2
do_cmd ./configure --prefix=${cur_dir}/${src_path}/cmake/tool
do_cmd gmake -j8 
do_cmd make install
export PATH=$PATH:${cur_dir}/${src_path}/cmake/tool/bin/
