Name:       appfw-env
Summary:    AppFW environment
Version:    0.0.1
Release:    1
Group:      Framework-appfw
License:    Apache-2.0
Source0:    %{name}-%{version}.tar.gz
BuildRequires:	cmake

Requires(post): /sbin/ldconfig
Requires(postun): /sbin/ldconfig

%description
appfw environment

%package	devel
Summary:    Dev package for appfw-env
Group:      Development/Libraries
Requires:	%{name} = %{version}-%{release}

%description devel
Dev package for appfw-env

%prep
%setup -q

%build

%if 0%{?tizen_build_binary_release_type_eng}
export CFLAGS="$CFLAGS -DTIZEN_ENGINEER_MODE"
export CXXFLAGS="$CXXFLAGS ?DTIZEN_ENGINEER_MODE"
export FFLAGS="$FFLAGS -DTIZEN_ENGINEER_MODE"
%endif

MAJORVER=`echo %{version} | awk 'BEGIN {FS="."}{print $1}'`
%cmake . -DCMAKE_INSTALL_PREFIX=%{_prefix} -DVERSION=%{version} -DVERSION_MAJOR=${MAJORVER}

make %{?jobs:-j%jobs}

%install
%make_install
mkdir -p %{buildroot}/usr/share/license
cp LICENSE %{buildroot}/usr/share/license/%{name}

%post

%postun

%files
%manifest appfw-env.manifest
%defattr(-,root,root,-)
%{_libdir}/libappfw-env.so.*
/usr/share/license/%{name}

%files devel
%defattr(-,root,root,-)
%{_includedir}/appfw_env.h
%{_libdir}/pkgconfig/appfw-env.pc
%{_libdir}/libappfw-env.so
