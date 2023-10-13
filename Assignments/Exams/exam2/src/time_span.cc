// Copyright 2022 Carson Murray
#include <exam2/inc/time_span.h>

TimeSpan::TimeSpan()
        :hours_(0), minutes_(0), seconds_(0) {
  // testTime();
}
TimeSpan::TimeSpan(int hours, int minutes, int seconds)
          : hours_(hours), minutes_(minutes), seconds_(seconds) {
  // testTime();
}

/* void testTime() {
  if ((hours_ < 0) || (hours_ > 23)) {
    std::cout << "Invalid hour" << std::endl;
    exit(1);
  }
  if ((minutes_ < 0) || (minutes_ > 59 )) {
    std::cout << "Invalid minutes" << std::endl;
    exit(1);
  }
  if ((seconds_ < 0) || (seconds_ > 59 )) {
    std::cout << "Invalid seconds" << std::endl;
    exit(1);
  }

} */

int TimeSpan::hours() const {
  return hours_;
}

int TimeSpan::minutes() const {
  return minutes_;
}

int TimeSpan::seconds() const {
  return seconds_;
}

const TimeSpan TimeSpan::Add(const TimeSpan& rhs) const {
  int totalSeconds = seconds() + rhs.seconds();
  int totalMinutes = minutes() + rhs.minutes();
  int totalHours = hours() + rhs.hours();
  if (totalSeconds >= 60) {
    totalSeconds = totalSeconds - 60;
    totalMinutes += 1;
  }
  if (totalMinutes >= 60) {
    totalMinutes = totalMinutes - 60;
    totalHours += 1;
  }
  return TimeSpan(totalHours, totalMinutes, totalSeconds);
}

const TimeSpan TimeSpan::operator+(const TimeSpan& rhs) const {
  return Add(rhs);
}

const TimeSpan TimeSpan::operator+(int rhs) const {
  TimeSpan timeSpan_rhs(0, 0, rhs);
  return Add(timeSpan_rhs);
}

const TimeSpan operator+(int lhs, const TimeSpan& rhs) {
  return TimeSpan();
}

std::istream& TimeSpan::Insert(std::istream* in) {
  char colon;
  *in >> hours_ >> colon >> minutes_ >> colon >> seconds_;
  return *in;
}

std::istream& operator>>(std::istream& lhs, TimeSpan& rhs) {
  return rhs.Insert(&lhs);
}

std::ostream& TimeSpan::Extract(std::ostream* out) const {
  *out << hours_ << " : "<< minutes_ << " : " << seconds_;
  return *out;
}
std::ostream& operator<<(std::ostream& lhs, const TimeSpan& rhs) {
  return rhs.Extract(&lhs);
}






