FROM ubuntu:22.04

USER root

COPY .zshrc /root/.zshrc

ENV ZSH_VERSION=5.8.1-1
ENV CURL_VERSION=7.81.0-1ubuntu1.4
ENV GIT_VERSION=1:2.34.1-1ubuntu1.4
ENV UNZIP_VERSION=6.0-26ubuntu3.1
ENV PYTHON_VERSION=3.10.6-1~22.04
ENV PYTHON_PIP_VERSION=22.0.2+dfsg-1
ENV CLANG_FORMAT_VERSION=1:14.0-55~exp2
ENV CLANG_TIDY_VERSION=1:14.0-55~exp2
ENV NODEJS_VERSION=18.x

RUN \
  apt-get update && \
  apt-get -y install \
  curl=$CURL_VERSION \
  git \
  unzip=$UNZIP_VERSION \
  zsh=$ZSH_VERSION \
  python3.10=$PYTHON_VERSION \
  python3-pip=$PYTHON_PIP_VERSION \
  clang-format=$CLANG_FORMAT_VERSION \
  clang-tidy=$CLANG_TIDY_VERSION

# Install oh my zsh
RUN \
  zsh -c "$(curl -fsSL https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh)" ||true && \
  chmod +r /root/.zshrc && chsh -s /root/.zshrc

# Install NodeJs
RUN \
  curl -sL "https://deb.nodesource.com/setup_$NODEJS_VERSION" | bash - && \
  apt-get -y install nodejs && \
  npm install -g \
  @bazel/bazelisk \
  @bazel/buildifier \
  pnpm

CMD [ "zsh" ]