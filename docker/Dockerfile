FROM ubuntu:18.04
MAINTAINER kaityo256

ENV USER user
ENV HOME /home/${USER}
ENV SHELL /bin/bash

RUN useradd -m ${USER}
RUN gpasswd -a ${USER} sudo
RUN echo 'user:userpass' | chpasswd

RUN apt-get update && apt-get install -y \
    gdb \
    git \
    g++ \
    make \
    vim

USER ${USER}

RUN cd ${HOME} \
    && git clone --recursive https://github.com/kaityo256/xbyak_call_test.git\
    && cd xbyak_call_test \
    && g++ -Ixbyak test.cpp

WORKDIR /home/${USER}/xbyak_call_test
