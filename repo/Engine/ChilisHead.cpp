#include "ChilisHead.h"
#pragma once

head::head(int x, int y, int w, int h, int size, int skip_coef, Color c)
	:center_x(x),
	center_y(y),
	xdim(w),
	ydim(h),
	s(size),
	spacing(skip_coef),
	col(c)
{
}


std::vector<int> head::HeadSectorDetection(int xchar, int ychar) const
{
	std::vector<int> ret;// vector 'return'
	static constexpr int charw = 15;
	static constexpr int charh = 18;
	static constexpr float yscale = 123 / 200.0f;
	if (ychar + charh >= center_y - int(s * yscale) && xchar + charw >= center_x - int(s / 2.0f) && xchar <= center_x + int(s / 2.0f) && ychar <= center_y + int(s *yscale))//top,left, right and bottom side borders
	{
		if (ychar + charh <= center_y) {// top side
			if (xchar + charw <= center_x) {//1.sector
				if (ychar + charh <= center_y - int(s * yscale / 2)) {// 1.sector top
					if (xchar + charw <= center_x - int(s / 4.0f)) {// 1.1
						if (ychar + charh <= center_y - int(s * 3 * yscale / 4)) {// 1.1t
							if (xchar + charw <= center_x - int(s * 3 / 8.0f)) {// 1.1.1
								if (ychar + charh <= center_y - int(s * 7 * yscale / 8)) {// 1.1.1t
									if (xchar + charw <= center_x - int(s * 7 / 16.0f)) {// 1.1.1.1
									}
									else {// 1.1.1.2
										if (ychar + charh <= center_y - int(s * 15 * yscale / 16)) {// 1.1.1.2t
											if (xchar + charw <= center_x - int(s * 13 / 32.0f)) {// 1.1.1.2.1
											}
											else {// 1.1.1.2.2
												ret.push_back(0); ret.push_back(1);
											}
										}
										else {// 1.1.1.2.b
											if (xchar + charw <= center_x - int(s * 13 / 32.0f)) {// 1.1.1.2.3
												ret.push_back(0);
											}
											else {// 1.1.1.2.4
												ret.push_back(0); ret.push_back(1);
											}
										}
									}
								}
								else {// 1.1.1.b
									if (xchar + charw <= center_x - int(s * 7 / 16.0f)) {// 1.1.1.3
										if (ychar + charh <= center_y - int(s * 13 * yscale / 16)) {// 1.1.1.3t
											if (xchar + charw <= center_x - int(s * 15 / 32.0f)) {// 1.1.1.3.1
											}
											else {// 1.1.1.3.2
												ret.push_back(0);
											}
										}
										else {// 1.1.1.3.b
											if (xchar + charw <= center_x - int(s * 15 / 32.0f)) {// 1.1.1.3.3
											}
											else {// 1.1.1.3.4
												ret.push_back(0);
											}
										}
									}
									else {// 1.1.1.4
										if (ychar + charh <= center_y - int(s * 13 * yscale / 16)) {// 1.1.1.4t
											if (xchar + charw <= center_x - int(s * 13 / 32.0f)) {// 1.1.1.4.1
												ret.push_back(0);
											}
											else {// 1.1.1.4.2
												ret.push_back(0); ret.push_back(1);
											}
										}
										else {// 1.1.1.2.b
											if (xchar + charw <= center_x - int(s * 13 / 32.0f)) {// 1.1.1.4.3
												ret.push_back(0);
											}
											else {// 1.1.1.4.4
												ret.push_back(0); ret.push_back(1);
											}
										}
									}
								}
							}
							else {// 1.1.2
								if (ychar + charh <= center_y - int(s * 7 * yscale / 8)) {// 1.1.2t
									if (xchar + charw <= center_x - int(s * 5 / 16.0f)) {// 1.1.2.1
										if (ychar + charh <= center_y - int(s * 15 * yscale / 16)) {// 1.1.2.1t
											if (xchar + charw <= center_x - int(s * 11 / 32.0f)) {// 1.1.2.1.1
												ret.push_back(0); ret.push_back(1);
											}
											else {// 1.1.2.1.2
												ret.push_back(0); ret.push_back(1);
											}
										}
										else {// 1.1.2.1.b
											if (xchar + charw <= center_x - int(s * 11 / 32.0f)) {// 1.1.2.1.3
												ret.push_back(0); ret.push_back(1);
											}
											else {// 1.1.2.1.4
												ret.push_back(0); ret.push_back(1);
											}
										}
									}
									else {// 1.1.2.2
										if (ychar + charh <= center_y - int(s * 15 * yscale / 16)) {// 1.1.2.2t
											if (xchar + charw <= center_x - int(s * 9 / 32.0f)) {// 1.1.2.2.1
											}
											else {// 1.1.2.2.2
												ret.push_back(2); ret.push_back(3);
											}
										}
										else {// 1.1.1.2.b
											if (xchar + charw <= center_x - int(s * 9 / 32.0f)) {// 1.1.2.2.3
												ret.push_back(2);
											}
											else {// 1.1.2.2.4
												ret.push_back(2); ret.push_back(3);
											}
										}
									}
								}
								else {// 1.1.2.b
									if (xchar + charw <= center_x - int(s * 5 / 16.0f)) {// 1.1.2.3
										if (ychar + charh <= center_y - int(s * 13 * yscale / 16)) {// 1.1.2.3t
											if (xchar + charw <= center_x - int(s * 11 / 32.0f)) {// 1.1.2.3.1
												ret.push_back(1);
											}
											else {// 1.1.1.3.2
												ret.push_back(1); ret.push_back(2);
											}
										}
										else {// 1.1.1.3.b
											if (xchar + charw <= center_x - int(s * 11 / 32.0f)) {// 1.1.2.3.3
												ret.push_back(1);
											}
											else {// 1.1.2.3.4
												ret.push_back(1); ret.push_back(2);
											}
										}
									}
									else {// 1.1.2.4
										if (ychar + charh <= center_y - int(s * 13 * yscale / 16)) {// 1.1.2.4t
											if (xchar + charw <= center_x - int(s * 9 / 32.0f)) {// 1.1.2.4.1
												ret.push_back(2);
											}
											else {// 1.1.2.4.2
												ret.push_back(2); ret.push_back(3);
											}
										}
										else {// 1.1.1.2.b
											if (xchar + charw <= center_x - int(s * 9 / 32.0f)) {// 1.1.2.4.3
												ret.push_back(2);
											}
											else {// 1.1.2.4.4
												ret.push_back(2); ret.push_back(3);
											}
										}
									}
								}
							}

						}
						else { //1.1b
							if (xchar + charw <= center_x - int(s * 3 / 8.0f)) {// 1.1.3
								if (ychar + charh <= center_y - int(s * 5 * yscale / 8)) {// 1.1.3t
									if (xchar + charw <= center_x - int(s * 7 / 16.0f)) {// 1.1.3.1
										ret.push_back(0);
									}
									else {// 1.1.3.2
										if (ychar + charh <= center_y - int(s * 11 * yscale / 16)) {// 1.1.3.2t
											if (xchar + charw <= center_x - int(s * 13 / 32.0f)) {// 1.1.3.2.1
												ret.push_back(0);
											}
											else {// 1.1.3.2.2
												ret.push_back(0); ret.push_back(1);
											}
										}
										else {// 1.1.3.2.b
											if (xchar + charw <= center_x - int(s * 13 / 32.0f)) {// 1.1.3.2.3
												ret.push_back(0);
											}
											else {// 1.1.3.2.4
												ret.push_back(0); ret.push_back(1); ret.push_back(2);
											}
										}
									}
								}
								else {// 1.1.3.b
									if (xchar + charw <= center_x - int(s * 7 / 16.0f)) {// 1.1.3.3
										ret.push_back(0); ret.push_back(14); ret.push_back(15);
									}
									else {// 1.1.3.4
										if (ychar + charh <= center_y - int(s * 9 * yscale / 16)) {// 1.1.3.4t
											if (xchar + charw <= center_x - int(s * 13 / 32.0f)) {// 1.1.3.4.1
												ret.push_back(14);
											}
											else {// 1.1.3.4.2
												ret.push_back(1); ret.push_back(2); ret.push_back(14);
											}
										}
										else {// 1.1.3.4.b
											if (xchar + charw <= center_x - int(s * 13 / 32.0f)) {// 1.1.3.4.3
												ret.push_back(14);
											}
											else {// 1.1.3.4.4
												ret.push_back(1); ret.push_back(2); ret.push_back(14);
											}
										}
									}
								}
							}
							else {// 1.1.4
								if (ychar + charh <= center_y - int(s * 5 * yscale / 8)) {// 1.1.4t
									if (xchar + charw <= center_x - int(s * 5 / 16.0f)) {// 1.1.4.1
										ret.push_back(1); ret.push_back(2);
									}
									else {// 1.1.4.2
										if (ychar + charh <= center_y - int(s * 11 * yscale / 16)) {// 1.1.4.2t
											if (xchar + charw <= center_x - int(s * 9 / 32.0f)) {// 1.1.4.2.1
												ret.push_back(2);
											}
											else {//1.1.4.2.2
												ret.push_back(2); ret.push_back(3);
											}
										}
										else {// 1.1.4.2.b
											if (xchar + charw <= center_x - int(s * 9 / 32.0f)) {// 1.1.4.2.3
												ret.push_back(2);
											}
											else {// 1.1.4.2.4
												ret.push_back(2); ret.push_back(3); ret.push_back(4);
											}
										}
									}
								}
								else {// 1.1.4.b
									if (xchar + charw <= center_x - int(s * 5 / 16.0f)) {// 1.1.4.3
										ret.push_back(1); ret.push_back(2); ret.push_back(14);
									}
									else {// 1.1.4.4
										if (ychar + charh <= center_y - int(s * 9 * yscale / 16)) {// 1.1.4.4t
											if (xchar + charw <= center_x - int(s * 9 / 32.0f)) {// 1.1.4.4.1
												ret.push_back(14);
											}
											else {// 1.1.4.4.2
												ret.push_back(3); ret.push_back(4); ret.push_back(14);
											}
										}
										else {// 1.1.4.4.b
											if (xchar + charw <= center_x - int(s * 9 / 32.0f)) {// 1.1.4.4.3
												ret.push_back(14);
											}
											else {// 1.1.2.4.4
												ret.push_back(3); ret.push_back(4); ret.push_back(14);
											}
										}
									}
								}
							}
						}
					}
					else {// 1.2
						if (ychar + charh <= center_y - int(s * 3 * yscale / 4)) {// 1.2t
							if (xchar + charw <= center_x - int(s / 8.0f)) {// 1.2.1
								if (ychar + charh <= center_y - int(s * 7 * yscale / 8)) {// 1.2.1t
									if (xchar + charw <= center_x - int(s * 3 / 16.0f)) {// 1.2.1.1
										ret.push_back(2); ret.push_back(3);
									}
									else {// 1.2.1.2
										if (ychar + charh <= center_y - int(s * 15 * yscale / 16)) {// 1.2.1.2t
											if (xchar + charw <= center_x - int(s * 5 / 32.0f)) {// 1.2.1.2.1
											}
											else {// 1.2.1.2.2
												ret.push_back(4); ret.push_back(5);
											}
										}
										else {// 1.2.1.2.b
											if (xchar + charw <= center_x - int(s * 5 / 32.0f)) {// 1.2.1.2.3
												ret.push_back(4);
											}
											else {// 1.2.1.2.4
												ret.push_back(4); ret.push_back(5);
											}
										}
									}
								}
								else {// 1.2.1.b
									if (xchar + charw <= center_x - int(s * 3 / 16.0f)) {// 1.2.1.3
										if (ychar + charh <= center_y - int(s * 13 * yscale / 16)) {// 1.2.1.3t
											if (xchar + charw <= center_x - int(s * 7 / 32.0f)) {// 1.2.1.3.1
												ret.push_back(2); ret.push_back(3);
											}
											else {// 1.2.1.3.2
												ret.push_back(3); ret.push_back(4);
											}
										}
										else {// 1.2.1.3.b
											if (xchar + charw <= center_x - int(s * 7 / 32.0f)) {// 1.2.1.3.3
												ret.push_back(3);
											}
											else {// 1.2.1.3.4
												ret.push_back(3); ret.push_back(4);
											}
										}
									}
									else {// 1.2.1.4
										if (ychar + charh <= center_y - int(s * 13 * yscale / 16)) {// 1.2.1.4t
											if (xchar + charw <= center_x - int(s * 5 / 32.0f)) {// 1.2.1.4.1
												ret.push_back(4);
											}
											else {// 1.2.1.4.2
												ret.push_back(4); ret.push_back(5);
											}
										}
										else {// 1.2.1.2.b
											if (xchar + charw <= center_x - int(s * 5 / 32.0f)) {// 1.2.1.4.3
												ret.push_back(4);
											}
											else {// 1.2.1.4.4
												ret.push_back(4); ret.push_back(5);
											}
										}
									}
								}
							}
							else {// 1.2.2
								if (ychar + charh <= center_y - int(s * 7 * yscale / 8)) {// 1.2.2t
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 1.2.2.1
										ret.push_back(4); ret.push_back(5);
									}
									else {// 1.2.2.2
										if (ychar + charh <= center_y - int(s * 15 * yscale / 16)) {// 1.2.2.2t
											if (xchar + charw <= center_x - int(s / 32.0f)) {// 1.2.2.2.1
											}
											else {// 1.2.2.2.2
												ret.push_back(6); ret.push_back(7);
											}
										}
										else {// 1.1.1.2.b
											ret.push_back(6); ret.push_back(7);
										}
									}
								}
								else {// 1.2.2.b
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 1.2.2.3
										if (ychar + charh <= center_y - int(s * 13 * yscale / 16)) {// 1.2.2.3t
											if (xchar + charw <= center_x - int(s * 3 / 32.0f)) {// 1.2.2.3.1
												ret.push_back(4); ret.push_back(5);
											}
											else {// 1.2.2.3.2
												ret.push_back(5); ret.push_back(6);
											}
										}
										else {// 1.1.1.3.b
											if (xchar + charw <= center_x - int(s * 3 / 32.0f)) {// 1.2.2.3.3
												ret.push_back(5);
											}
											else {// 1.2.2.3.4
												ret.push_back(5); ret.push_back(6);
											}
										}
									}
									else {// 1.2.2.4
										ret.push_back(6);
									}
								}
							}
						}
						else { //1.2b
							if (xchar + charw <= center_x - int(s / 8.0f)) {// 1.2.3
								if (ychar + charh <= center_y - int(s * 5 * yscale / 8)) {// 1.2.3t
									if (xchar + charw <= center_x - int(s * 3 / 16.0f)) {// 1.2.3.1
										ret.push_back(3); ret.push_back(4);
									}
									else {// 1.2.3.2
										if (ychar + charh <= center_y - int(s * 11 * yscale / 16)) {// 1.2.3.2t
											if (xchar + charw <= center_x - int(s * 5 / 32.0f)) {// 1.2.3.2.1
												ret.push_back(4);
											}
											else {// 1.2.3.2.2
												ret.push_back(4); ret.push_back(5);
											}
										}
										else {// 1.2.3.2.b
											if (xchar + charw <= center_x - int(s * 5 / 32.0f)) {// 1.2.3.2.3
												ret.push_back(4);
											}
											else {// 1.1.3.2.4
												ret.push_back(5); ret.push_back(6);
											}
										}
									}
								}
								else {// 1.2.3.b
									if (xchar + charw <= center_x - int(s * 3 / 16.0f)) {// 1.2.3.3
										ret.push_back(3); ret.push_back(4); ret.push_back(14);
									}
									else {// 1.2.3.4
										if (ychar + charh <= center_y - int(s * 9 * yscale / 16)) {// 1.2.3.4t
											if (xchar + charw <= center_x - int(s * 5 / 32.0f)) {// 1.2.3.4.1
												ret.push_back(14);
											}
											else {// 1.2.3.4.2
												ret.push_back(5); ret.push_back(6); ret.push_back(14);
											}
										}
										else {// 1.1.3.4.b
											if (xchar + charw <= center_x - int(s * 5 / 32.0f)) {// 1.2.3.4.3
												ret.push_back(14);
											}
											else {// 1.2.3.4.4
												ret.push_back(5); ret.push_back(6); ret.push_back(14);
											}
										}
									}
								}
							}
							else {// 1.2.4
								if (ychar + charh <= center_y - int(s * 5 * yscale / 8)) {// 1.2.4t
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 1.2.4.1
										ret.push_back(5);
										ret.push_back(6);
									}
									else {// 1.2.4.2
										if (ychar + charh <= center_y - int(s * 11 * yscale / 16)) {// 1.2.4.2t
											ret.push_back(6);
										}
										else {// 1.2.4.2.b
											if (xchar + charw <= center_x - int(s / 32.0f)) {// 1.2.4.2.3
												ret.push_back(6);
											}
											else {// 1.2.4.2.4
											}
										}
									}
								}
								else {// 1.2.4.b
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 1.2.4.3
										ret.push_back(5); ret.push_back(6); ret.push_back(14);
									}
									else {// 1.2.4.4
										ret.push_back(14);
									}
								}
							}
						}
					}
				}
				else {//1.b
					if (xchar + charw <= center_x - int(s / 4.0f)) {// 1.3
						if (ychar + charh <= center_y - int(s*yscale / 4)) {// 1.3t
							if (xchar + charw <= center_x - int(s * 3 / 8.0f)) {// 1.3.1
								if (ychar + charh <= center_y - int(s * 3 * yscale / 8)) {// 1.3.1t
									if (xchar + charw <= center_x - int(s * 7 / 16.0f)) {// 1.3.1.1
										if (ychar + charh <= center_y - int(s * 7 * yscale / 16)) {// 1.3.1.1t
											ret.push_back(15);
										}
										else {// 1.3.1.1.b
											ret.push_back(15); ret.push_back(17);
										}
									}
									else {// 1.3.1.2
										if (ychar + charh <= center_y - int(s * 7 * yscale / 16)) {// 1.3.1.2t
										}
										else {// 1.3.1.2.b
											ret.push_back(17);
										}
									}
								}
								else {// 1.3.1.b
									if (xchar + charw <= center_x - int(s * 7 / 16.0f)) {// 1.3.1.3
										if (ychar + charh <= center_y - int(s * 5 * yscale / 16)) {// 1.3.1.3t
											ret.push_back(15); ret.push_back(17);
										}
										else {// 1.3.1.3.b
											ret.push_back(15);
										}
									}
									else {// 1.3.1.4
										if (ychar + charh <= center_y - int(s * 5 * yscale / 16)) {// 1.3.1.4t
											ret.push_back(17);
										}
										else {// 1.3.1.4.b
											if (xchar + charw <= center_x - int(s * 13 / 32.0f)) {// 1.3.1.4.3
											}
											else {// 1.3.1.4.4
												ret.push_back(18); ret.push_back(20);
											}
										}
									}
								}
							}
							else {// 1.3.2
								if (ychar + charh <= center_y - int(s * 3 * yscale / 8)) {// 1.3.2t
									if (xchar + charw <= center_x - int(s * 5 / 16.0f)) {// 1.3.2.1
										if (ychar + charh <= center_y - int(s * 7 * yscale / 16)) {// 1.3.2.1t
										}
										else {// 1.3.2.1.b
											ret.push_back(17);
										}
									}
									else {// 1.3.2.2
										if (ychar + charh <= center_y - int(s * 7 * yscale / 16)) {// 1.3.2.2t
										}
										else {// 1.3.2.2.b
											ret.push_back(17);
										}
									}
								}
								else {// 1.3.2.b
									if (xchar + charw <= center_x - int(s * 5 / 16.0f)) {// 1.3.2.3
										if (ychar + charh <= center_y - int(s * 5 * yscale / 16)) {// 1.3.2.3t
											ret.push_back(17);
										}
										else {// 1.3.2.3.b
											ret.push_back(18); ret.push_back(20);
										}
									}
									else {// 1.3.2.4
										if (ychar + charh <= center_y - int(s * 5 * yscale / 16)) {// 1.3.2.4t
											ret.push_back(17);
										}
										else {// 1.3.2.4.b
											ret.push_back(18);
										}
									}
								}
							}

						}
						else { //1.3b
							if (xchar + charw <= center_x - int(s * 3 / 8.0f)) {// 1.3.3
								if (ychar + charh <= center_y - int(s * yscale / 8)) {// 1.3.3t
									if (xchar + charw <= center_x - int(s * 7 / 16.0f)) {// 1.3.3.1
										ret.push_back(15);
									}
									else {// 1.3.3.2
										if (ychar + charh <= center_y - int(s * 3 * yscale / 16)) {// 1.3.3.2t
											if (xchar + charw <= center_x - int(s * 13 / 32.0f)) {// 1.3.3.2.1
											}
											else {// 1.1.3.2.2
												ret.push_back(18); ret.push_back(19); ret.push_back(20);
											}
										}
										else {// 1.3.3.2.b
											if (xchar + charw <= center_x - int(s * 13 / 32.0f)) {// 1.3.3.2.3
											}
											else {// 1.3.3.2.4
												ret.push_back(19); ret.push_back(20);
											}
										}
									}
								}
								else {// 1.3.3.b
									if (xchar + charw <= center_x - int(s * 7 / 16.0f)) {// 1.3.3.3
										ret.push_back(15);
									}
									else {// 1.3.3.4
										if (ychar + charh <= center_y - int(s*yscale / 16)) {// 1.3.3.4t
											if (xchar + charw <= center_x - int(s * 13 / 32.0f)) {// 1.3.3.4.1

											}
											else {// 1.3.3.4.2
												ret.push_back(19); ret.push_back(20);
											}
										}
										else {// 1.3.3.4.b
										}
									}
								}
							}
							else {// 1.3.4
								if (ychar + charh <= center_y - int(s*yscale / 8)) {// 1.3.4t
									if (xchar + charw <= center_x - int(s * 5 / 16.0f)) {// 1.3.4.1
										if (ychar + charh <= center_y - int(s * 3 * yscale / 16)) {// 1.3.4.1t
											ret.push_back(18); ret.push_back(19); ret.push_back(20);
										}
										else {// 1.3.4.1.b
											ret.push_back(19); ret.push_back(20);
										}
									}
									else {// 1.3.4.2
										if (ychar + charh <= center_y - int(s * 3 * yscale / 16)) {// 1.3.4.2t
											ret.push_back(18); ret.push_back(19);
										}
										else {// 1.3.4.2.b
											if (xchar + charw <= center_x - int(s * 9 / 32.0f)) {// 1.3.4.2.3
												ret.push_back(19);
											}
											else {// 1.1.4.2.4
												ret.push_back(19); ret.push_back(26); ret.push_back(28);
											}
										}
									}
								}
								else {// 1.3.4.b
									if (xchar + charw <= center_x - int(s * 5 / 16.0f)) {// 1.3.4.3
										if (ychar + charh <= center_y - int(s*yscale / 16)) {// 1.3.4.3t
											ret.push_back(19); ret.push_back(20);
										}
										else {// 1.1.4.3.b
										}
									}
									else {// 1.3.4.4
										if (ychar + charh <= center_y - int(s*yscale / 16)) {// 1.3.4.4t
											if (xchar + charw <= center_x - int(s * 9 / 32.0f)) {// 1.3.4.4.1
											}
											else {// 1.3.4.4.2
												ret.push_back(26); ret.push_back(27); ret.push_back(28);
											}
										}
										else {// 1.3.4.4.b
											if (xchar + charw <= center_x - int(s * 9 / 32.0f)) {// 1.3.4.4.3
											}
											else {// 1.3.4.4.4
												ret.push_back(27); ret.push_back(28);
											}
										}
									}
								}
							}
						}
					}
					else {// 1.4
						if (ychar + charh <= center_y - int(s*yscale / 4)) {// 1.4t
							if (xchar + charw <= center_x - int(s / 8.0f)) {// 1.4.1
								if (ychar + charh <= center_y - int(s * 3 * yscale / 8)) {// 1.4.1t
									if (xchar + charw <= center_x - int(s * 3 / 16.0f)) {// 1.4.1.1
										if (ychar + charh <= center_y - int(s * 7 * yscale / 16)) {// 1.4.1.1t
										}
										else {// 1.4.1.1.b
											ret.push_back(17);
										}
									}
									else {// 1.4.1.2
										if (ychar + charh <= center_y - int(s * 7 * yscale / 16)) {// 1.4.1.2t
										}
										else {// 1.4.1.2.b
											ret.push_back(17);
										}
									}
								}
								else {// 1.4.1.b
									if (xchar + charw <= center_x - int(s * 3 / 16.0f)) {// 1.4.1.3
										if (ychar + charh <= center_y - int(s * 5 * yscale / 16)) {// 1.4.1.3t
											ret.push_back(17);
										}
										else {// 1.4.1.3.b
											ret.push_back(18);
										}
									}
									else {// 1.4.1.4
										if (ychar + charh <= center_y - int(s * 5 * yscale / 16)) {// 1.4.1.4t
											ret.push_back(17);
										}
										else {// 1.4.1.4.b
											ret.push_back(18);
										}
									}
								}
							}
							else {// 1.4.2
								if (ychar + charh <= center_y - int(s * 3 * yscale / 8)) {// 1.4.2t
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 1.4.2.1
										if (ychar + charh <= center_y - int(s * 7 * yscale / 16)) {// 1.4.2.1t
										}
										else {// 1.4.2.1.b
											ret.push_back(17);
										}
									}
									else {// 1.4.2.2
										if (ychar + charh <= center_y - int(s * 7 * yscale / 16)) {// 1.4.2.2t
										}
										else {// 1.4.2.2.b
											ret.push_back(17);
										}
									}
								}
								else {// 1.4.2.b
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 1.4.2.3
										if (ychar + charh <= center_y - int(s * 5 * yscale / 16)) {// 1.4.2.3t
											ret.push_back(17);
										}
										else {// 1.4.2.3.b
											ret.push_back(18);
										}
									}
									else {// 1.4.2.4
										if (ychar + charh <= center_y - int(s * 5 * yscale / 16)) {// 1.4.2.4t
											ret.push_back(17);
										}
										else {// 1.4.2.4.b
											if (xchar + charw <= center_x - int(s / 32.0f)) {// 1.4.2.4.3
												ret.push_back(18);
											}
											else {// 1.4.2.4.4
												ret.push_back(18); ret.push_back(21);
											}
										}
									}
								}
							}

						}
						else { //1.4b
							if (xchar + charw <= center_x - int(s / 8.0f)) {// 1.4.3
								if (ychar + charh <= center_y - int(s * yscale / 8)) {// 1.4.3t
									if (xchar + charw <= center_x - int(s * 3 / 16.0f)) {// 1.4.3.1
										if (ychar + charh <= center_y - int(s * 3 * yscale / 16)) {// 1.4.3.1t
											ret.push_back(18); ret.push_back(19);
										}
										else {// 1.4.3.1.b
											ret.push_back(19); ret.push_back(26); ret.push_back(28);
										}
									}
									else {// 1.4.3.2
										if (ychar + charh <= center_y - int(s * 3 * yscale / 16)) {// 1.4.3.2t
											ret.push_back(18); ret.push_back(19);
										}
										else {// 1.4.3.2.b
											if (xchar + charw <= center_x - int(s * 5 / 32.0f)) {// 1.4.3.2.3
												ret.push_back(19); ret.push_back(26);
											}
											else {// 1.4.3.2.4
												ret.push_back(19); ret.push_back(26); ret.push_back(29);
											}
										}
									}
								}
								else {// 1.4.3.b
									if (xchar + charw <= center_x - int(s * 3 / 16.0f)) {// 1.4.3.3
										if (ychar + charh <= center_y - int(s*yscale / 16)) {// 1.4.3.3t
											ret.push_back(26); ret.push_back(27); ret.push_back(28);
										}
										else {// 1.4.3.3.b
											ret.push_back(27); ret.push_back(28);
										}
									}
									else {// 1.4.3.4
										if (ychar + charh <= center_y - int(s*yscale / 16)) {// 1.4.3.4t
											if (xchar + charw <= center_x - int(s * 5 / 32.0f)) {// 1.4.3.4.1
												ret.push_back(26); ret.push_back(27);
											}
											else {// 1.4.3.4.2
												ret.push_back(26); ret.push_back(27); ret.push_back(29);
											}
										}
										else {// 1.4.3.4.b
											if (xchar + charw <= center_x - int(s * 5 / 32.0f)) {// 1.4.3.4.3
												ret.push_back(27);
											}
											else {// 1.4.3.4.4
												ret.push_back(27); ret.push_back(29);
											}
										}
									}
								}
							}
							else {// 1.4.4
								if (ychar + charh <= center_y - int(s*yscale / 8)) {// 1.4.4t
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 1.4.4.1
										if (ychar + charh <= center_y - int(s * 3 * yscale / 16)) {// 1.4.4.1t
											ret.push_back(18); ret.push_back(19);
										}
										else {// 1.4.4.1.b
											ret.push_back(19); ret.push_back(26); ret.push_back(29);
										}
									}
									else {// 1.4.4.2
										if (ychar + charh <= center_y - int(s * 3 * yscale / 16)) {// 1.4.4.2t
											if (xchar + charw <= center_x - int(s / 32.0f)) {// 1.4.4.2.1
												ret.push_back(18); ret.push_back(19);
											}
											else {//1.4.4.2.2
												ret.push_back(18); ret.push_back(19); ret.push_back(21);
											}
										}
										else {// 1.4.4.2.b
											if (xchar + charw <= center_x - int(s / 32.0f)) {// 1.4.4.2.3
												ret.push_back(19);
											}
											else {// 1.4.4.2.4
												ret.push_back(19); ret.push_back(21); ret.push_back(34); ret.push_back(35);
											}
										}
									}
								}
								else {// 1.4.4.b
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 1.4.4.3
										if (ychar + charh <= center_y - int(s*yscale / 16)) {// 1.4.4.3t
											ret.push_back(26); ret.push_back(27); ret.push_back(29);
										}
										else {// 1.4.4.3.b
											ret.push_back(27); ret.push_back(29);
										}
									}
									else {// 1.4.4.4
										if (ychar + charh <= center_y - int(s*yscale / 16)) {// 1.4.4.4t
											if (xchar + charw <= center_x - int(s / 32.0f)) {// 1.4.4.4.1
											}
											else {// 1.4.4.4.2
												ret.push_back(34); ret.push_back(35);
											}
										}
										else {// 1.4.4.4.b
											if (xchar + charw <= center_x - int(s * 9 / 32.0f)) {// 1.4.4.4.3
												ret.push_back(34);
											}
											else {// 1.2.4.4.4
												ret.push_back(34); ret.push_back(35);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else {//2.sector
				if (ychar + charh <= center_y - int(s * yscale / 2)) {// 2.sector top
					if (xchar + charw <= center_x + int(s / 4.0f)) {// 2.1
						if (ychar + charh <= center_y - int(s * 3 * yscale / 4)) {// 2.1t
							if (xchar + charw <= center_x + int(s / 8.0f)) {// 2.1.1
								if (ychar + charh <= center_y - int(s * 7 * yscale / 8)) {// 2.1.1t
									if (xchar + charw <= center_x + int(s / 16.0f)) {// 2.1.1.1
										ret.push_back(6); ret.push_back(7);
									}
									else {// 2.1.1.2
										if (ychar + charh <= center_y - int(s * 15 * yscale / 16)) {// 2.1.1.2t
											if (xchar + charw <= center_x + int(s * 3 / 32.0f)) {// 2.1.1.2.1
											}
											else {// 2.1.1.2.2
												ret.push_back(8); ret.push_back(9);
											}
										}
										else {// 2.1.1.2.b
											if (xchar + charw <= center_x + int(s * 3 / 32.0f)) {// 2.1.1.2.3
												ret.push_back(7);
											}
											else {// 2.1.1.2.4
												ret.push_back(8); ret.push_back(9);
											}
										}
									}
								}
								else {// 2.1.1.b
									if (xchar + charw <= center_x + int(s / 16.0f)) {// 2.1.1.3
										if (ychar + charh <= center_y - int(s * 13 * yscale / 16)) {// 2.1.1.3t
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 2.1.1.3.1
												ret.push_back(6); ret.push_back(7);
											}
											else {// 2.1.1.3.2
												ret.push_back(7);
											}
										}
										else {// 2.1.1.3.b
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 2.1.1.3.3
											}
											else {// 2.1.1.3.4
												ret.push_back(7);
											}

										}
									}
									else {// 2.1.1.4
										if (ychar + charh <= center_y - int(s * 13 * yscale / 16)) {// 2.1.1.4t
											if (xchar + charw <= center_x + int(s * 3 / 32.0f)) {// 2.1.1.4.1
												ret.push_back(7);
											}
											else {// 2.1.1.4.2
												ret.push_back(7); ret.push_back(8);
											}
										}
										else {// 2.1.1.2.b
											if (xchar + charw <= center_x + int(s * 3 / 32.0f)) {// 2.1.1.4.3
												ret.push_back(7);
											}
											else {// 2.1.1.4.4
												ret.push_back(7); ret.push_back(8);
											}
										}
									}
								}
							}
							else {// 2.1.2
								if (ychar + charh <= center_y - int(s * 7 * yscale / 8)) {// 2.1.2t
									if (xchar + charw <= center_x + int(s * 3 / 16.0f)) {// 2.1.2.1
										ret.push_back(8); ret.push_back(9);
									}
									else {// 2.1.2.2
										if (ychar + charh <= center_y - int(s * 15 * yscale / 16)) {// 2.1.2.2t
											if (xchar + charw <= center_x + int(s * 7 / 32.0f)) {// 2.1.2.2.1
											}
											else {// 2.1.2.2.2
												ret.push_back(10); ret.push_back(11);
											}
										}
										else {// 2.1.2.2.b
											if (xchar + charw <= center_x + int(s * 7 / 32.0f)) {// 2.1.2.2.3
												ret.push_back(9);
											}
											else {// 2.1.2.2.4
												ret.push_back(10); ret.push_back(11);
											}
										}
									}
								}
								else {// 2.1.2.b
									if (xchar + charw <= center_x + int(s * 3 / 16.0f)) {// 2.1.2.3
										ret.push_back(8); ret.push_back(9);
									}
									else {// 2.1.2.4
										if (ychar + charh <= center_y - int(s * 13 * yscale / 16)) {// 2.1.2.4t
											if (xchar + charw <= center_x + int(s * 7 / 32.0f)) {// 2.1.2.4.1
												ret.push_back(9);
											}
											else {// 2.1.2.4.2
												ret.push_back(9); ret.push_back(10);
											}
										}
										else {// 2.1.2.4.b
											if (xchar + charw <= center_x + int(s * 7 / 32.0f)) {// 2.1.2.4.3
												ret.push_back(9);
											}
											else {// 2.1.2.4.4
												ret.push_back(9); ret.push_back(10);
											}
										}
									}
								}
							}
						}
						else { //2.1b
							if (xchar + charw <= center_x + int(s / 8.0f)) {// 2.1.3
								if (ychar + charh <= center_y - int(s * 5 * yscale / 8)) {// 2.1.3t
									if (xchar + charw <= center_x + int(s / 16.0f)) {// 2.1.3.1
										if (ychar + charh <= center_y - int(s * 11 * yscale / 16)) {// 2.1.3.1t
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 2.1.3.1.1
											}
											else {// 2.1.3.1.2
												ret.push_back(7);
											}
										}
										else {// 2.1.3.1.b
										}
									}
									else {// 2.1.3.2
										if (ychar + charh <= center_y - int(s * 11 * yscale / 16)) {// 2.1.3.2t
											if (xchar + charw <= center_x + int(s * 3 / 32.0f)) {// 2.1.3.2.1
												ret.push_back(7);
											}
											else {// 2.1.3.2.2
												ret.push_back(7); ret.push_back(8);
											}
										}
										else {// 2.1.3.2.b
											if (xchar + charw <= center_x + int(s * 3 / 32.0f)) {// 2.1.3.2.3
												ret.push_back(7);
											}
											else {// 1.1.3.2.4
												ret.push_back(7); ret.push_back(8);
											}
										}
									}
								}
								else {// 2.1.3.b
									if (xchar + charw <= center_x + int(s / 16.0f)) {// 2.1.3.3
										ret.push_back(14);

									}
									else {// 2.1.3.4
										if (ychar + charh <= center_y - int(s * 9 * yscale / 16)) {// 2.1.3.4t
											if (xchar + charw <= center_x + int(s * 3 / 32.0f)) {// 2.1.3.4.1
												ret.push_back(14);
											}
											else {// 2.1.3.4.2
												ret.push_back(7); ret.push_back(8); ret.push_back(14);
											}
										}
										else {// 2.1.3.4.b
											if (xchar + charw <= center_x + int(s * 3 / 32.0f)) {// 2.1.3.4.3
												ret.push_back(14);
											}
											else {// 2.1.3.4.4
												ret.push_back(7); ret.push_back(8); ret.push_back(14);
											}
										}
									}
								}
							}
							else {// 2.1.4
								if (ychar + charh <= center_y - int(s * 5 * yscale / 8)) {// 2.1.4t
									if (xchar + charw <= center_x + int(s * 3 / 16.0f)) {// 2.1.4.1
										if (ychar + charh <= center_y - int(s * 11 * yscale / 16)) {// 2.1.4.1t
											if (xchar + charw <= center_x + int(s * 5 / 32.0f)) {// 2.1.4.1.1
												ret.push_back(7); ret.push_back(8);
											}
											else {// 2.1.4.1.2
												ret.push_back(8); ret.push_back(9);
											}
										}
										else {// 2.1.4.1.b
											ret.push_back(7); ret.push_back(8);
										}
									}
									else {// 2.1.4.2
										if (ychar + charh <= center_y - int(s * 11 * yscale / 16)) {// 2.1.4.2t
											if (xchar + charw <= center_x + int(s * 7 / 32.0f)) {// 2.1.4.2.1
												ret.push_back(9);
											}
											else {//2.1.4.2.2
												ret.push_back(9); ret.push_back(10);
											}
										}
										else {// 2.1.4.2.b
											if (xchar + charw <= center_x + int(s * 7 / 32.0f)) {// 2.1.4.2.3
												ret.push_back(9);
											}
											else {// 2.1.4.2.4
												ret.push_back(9); ret.push_back(10);
											}
										}
									}
								}
								else {// 2.1.4.b
									if (xchar + charw <= center_x + int(s * 3 / 16.0f)) {// 2.1.4.3
										ret.push_back(7); ret.push_back(8); ret.push_back(14);
									}
									else {// 2.1.4.4
										if (ychar + charh <= center_y - int(s * 9 * yscale / 16)) {// 2.1.4.4t
											if (xchar + charw <= center_x + int(s * 7 / 32.0f)) {// 2.1.4.4.1
												ret.push_back(14);
											}
											else {// 2.1.4.4.2
												ret.push_back(9); ret.push_back(10); ret.push_back(14);
											}
										}
										else {// 2.1.4.4.b
											if (xchar + charw <= center_x + int(s * 7 / 32.0f)) {// 2.1.4.4.3
												ret.push_back(14);
											}
											else {// 2.1.4.4.4
												ret.push_back(9); ret.push_back(10); ret.push_back(14);
											}
										}
									}
								}
							}
						}
					}

					else {// 2.2
						if (ychar + charh <= center_y - int(s * 3 * yscale / 4)) {// 2.2t
							if (xchar + charw <= center_x + int(s * 3 / 8.0f)) {// 2.2.1
								if (ychar + charh <= center_y - int(s * 7 * yscale / 8)) {// 2.2.1t
									if (xchar + charw <= center_x + int(s * 5 / 16.0f)) {// 2.2.1.1
										ret.push_back(10); ret.push_back(11);
									}
									else {// 2.2.1.2
										if (ychar + charh <= center_y - int(s * 15 * yscale / 16)) {// 2.2.1.2t
											if (xchar + charw <= center_x + int(s * 11 / 32.0f)) {// 2.2.1.2.1
											}
											else {// 2.2.1.2.2
												ret.push_back(12); ret.push_back(13);
											}
										}
										else {// 2.2.1.2.b
											if (xchar + charw <= center_x + int(s * 11 / 32.0f)) {// 2.2.1.2.3
												ret.push_back(11);
											}
											else {// 2.2.1.2.4
												ret.push_back(12); ret.push_back(13);
											}
										}
									}
								}
								else {// 2.2.1.b
									if (xchar + charw <= center_x + int(s * 5 / 16.0f)) {// 2.2.1.3
										if (ychar + charh <= center_y - int(s * 13 * yscale / 16)) {// 2.2.1.3t
											ret.push_back(10); ret.push_back(11);
										}
										else {// 2.2.1.3.b
											if (xchar + charw <= center_x + int(s * 9 / 32.0f)) {// 2.2.1.3.3
												ret.push_back(10);
											}
											else {// 2.2.1.3.4
												ret.push_back(10); ret.push_back(11);
											}
										}
									}
									else {// 2.2.1.4
										if (ychar + charh <= center_y - int(s * 13 * yscale / 16)) {// 2.2.1.4t
											if (xchar + charw <= center_x + int(s * 11 / 32.0f)) {// 2.2.1.4.1
												ret.push_back(11);
											}
											else {// 2.2.1.4.2
												ret.push_back(11); ret.push_back(12);
											}
										}
										else {// 1.2.1.2.b
											if (xchar + charw <= center_x + int(s * 11 / 32.0f)) {// 2.2.1.4.3
												ret.push_back(11);
											}
											else {// 2.2.1.4.4
												ret.push_back(11); ret.push_back(12);
											}
										}
									}
								}
							}
							else {// 2.2.2
								if (ychar + charh <= center_y - int(s * 7 * yscale / 8)) {// 2.2.2t
									if (xchar + charw <= center_x + int(s * 15 / 16.0f)) {// 2.2.2.1
										ret.push_back(12); ret.push_back(13);
									}
									else {// 2.2.2.2
										if (ychar + charh <= center_y - int(s * 15 * yscale / 16)) {// 2.2.2.2t
										}
										else {// 2.2.2.2.b
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 2.2.2.2.3
												ret.push_back(13);
											}
											else {// 2.2.2.2.4
											}
										}
									}
								}
								else {// 2.2.2.b
									if (xchar + charw <= center_x + int(s * 15 / 16.0f)) {// 2.2.2.3
										if (ychar + charh <= center_y - int(s * 13 * yscale / 16)) {// 2.2.2.3t
											ret.push_back(12); ret.push_back(13);
										}
										else {// 2.2.2.3.b
											if (xchar + charw <= center_x + int(s * 29 / 32.0f)) {// 2.2.2.3.3
												ret.push_back(12);
											}
											else {// 2.2.2.3.4
												ret.push_back(12); ret.push_back(13);
											}

										}
									}
									else {// 2.2.2.4
										ret.push_back(13);
									}
								}
							}

						}
						else { //2.2b
							if (xchar + charw <= center_x + int(s * 3 / 8.0f)) {// 2.2.3
								if (ychar + charh <= center_y - int(s * 5 * yscale / 8)) {// 2.2.3t
									if (xchar + charw <= center_x + int(s * 5 / 16.0f)) {// 2.2.3.1
										if (ychar + charh <= center_y - int(s * 11 * yscale / 16)) {// 2.2.3.1t
											if (xchar + charw <= center_x + int(s * 9 / 32.0f)) {// 2.2.3.1.1
												ret.push_back(9); ret.push_back(10);
											}
											else {// 2.2.3.1.2
												ret.push_back(10); ret.push_back(11);
											}
										}
										else {// 2.2.3.1.b
											ret.push_back(9); ret.push_back(10);
										}
									}
									else {// 2.2.3.2
										if (ychar + charh <= center_y - int(s * 11 * yscale / 16)) {// 2.2.3.2t
											if (xchar + charw <= center_x + int(s * 11 / 32.0f)) {// 2.2.3.2.1
												ret.push_back(11);
											}
											else {// 2.2.3.2.2
												ret.push_back(11); ret.push_back(12);
											}
										}
										else {// 2.2.3.2.b
											if (xchar + charw <= center_x + int(s * 11 / 32.0f)) {// 2.2.3.2.3
												ret.push_back(11);
											}
											else {// 2.2.3.2.4
												ret.push_back(11); ret.push_back(12);
											}
										}
									}
								}
								else {// 2.2.3.b
									if (xchar + charw <= center_x + int(s * 5 / 16.0f)) {// 2.2.3.3
										ret.push_back(9); ret.push_back(10); ret.push_back(14);
									}
									else {// 2.2.3.4
										if (ychar + charh <= center_y - int(s * 9 * yscale / 16)) {// 2.2.3.4t
											if (xchar + charw <= center_x + int(s * 11 / 32.0f)) {// 2.2.3.4.1
												ret.push_back(14);
											}
											else {// 2.2.3.4.2
												ret.push_back(11);
												ret.push_back(12);
												ret.push_back(14);
											}
										}
										else {// 2.2.3.2.b
											if (xchar + charw <= center_x + int(s * 11 / 32.0f)) {// 2.2.3.4.3
												ret.push_back(14);
											}
											else {// 2.2.3.4.4
												ret.push_back(11);
												ret.push_back(12);
												ret.push_back(14);
											}
										}
									}
								}
							}
							else {// 2.2.4
								if (ychar + charh <= center_y - int(s * 5 * yscale / 8)) {// 2.2.4t
									if (xchar + charw <= center_x + int(s * 7 / 16.0f)) {// 2.2.4.1
										if (ychar + charh <= center_y - int(s * 11 * yscale / 16)) {// 2.2.4.1t
											if (xchar + charw <= center_x + int(s * 13 / 32.0f)) {// 2.2.4.1.1
												ret.push_back(11);
												ret.push_back(12);
											}
											else {// 2.2.4.1.2
												ret.push_back(12);
												ret.push_back(13);
											}
										}
										else {// 2.2.2.1.b
											ret.push_back(11);
											ret.push_back(12);
										}
									}
									else {// 2.2.4.2
										ret.push_back(13);
									}
								}
								else {// 2.2.4.b
									if (xchar + charw <= center_x + int(s * 7 / 16.0f)) {// 2.2.4.3
										ret.push_back(11); ret.push_back(12); ret.push_back(14);
									}
									else {// 2.2.4.4
										if (ychar + charh <= center_y - int(s * 9 * yscale / 16)) {// 2.2.4.4t
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 2.2.4.4.1
												ret.push_back(14);
											}
											else {// 2.2.4.4.2
												ret.push_back(13); ret.push_back(14); ret.push_back(16);
											}
										}
										else {// 2.2.4.4.b
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 2.2.4.4.3
												ret.push_back(14);
											}
											else {// 2.2.4.4.4
												ret.push_back(13); ret.push_back(14); ret.push_back(16);
											}
										}
									}
								}
							}
						}
					}
				}
				else {//2.b
					if (xchar + charw <= center_x + int(s / 4.0f)) {// 2.3
						if (ychar + charh <= center_y - int(s*yscale / 4)) {// 2.3t
							if (xchar + charw <= center_x + int(s / 8.0f)) {// 2.3.1
								if (ychar + charh <= center_y - int(s * 3 * yscale / 8)) {// 2.3.1t
									if (xchar + charw <= center_x + int(s / 16.0f)) {// 2.3.1.1
										if (ychar + charh <= center_y - int(s * 7 * yscale / 16)) {// 2.3.1.1t
										}
										else {// 2.3.1.1.b
											ret.push_back(17);
										}
									}
									else {// 2.3.1.2
										if (ychar + charh <= center_y - int(s * 7 * yscale / 16)) {// 2.3.1.2t
										}
										else {// 2.3.1.2.b
											ret.push_back(17);
										}
									}
								}
								else {// 2.3.1.b
									if (xchar + charw <= center_x + int(s / 16.0f)) {// 2.3.1.3
										if (ychar + charh <= center_y - int(s * 5 * yscale / 16)) {// 2.3.1.3t
											ret.push_back(17);
										}
										else {// 2.3.1.3.b
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 2.3.1.3.3
												ret.push_back(18); ret.push_back(21); ret.push_back(22); ret.push_back(24);
											}
											else {// 2.3.1.3.4
												ret.push_back(22); ret.push_back(24);
											}

										}
									}
									else {// 2.3.1.4
										if (ychar + charh <= center_y - int(s * 5 * yscale / 16)) {// 2.3.1.4t
											ret.push_back(17);
										}
										else {// 2.3.1.4.b
											ret.push_back(22);
										}
									}
								}
							}
							else {// 2.3.2
								if (ychar + charh <= center_y - int(s * 3 * yscale / 8)) {// 2.3.2t
									if (xchar + charw <= center_x + int(s * 3 / 16.0f)) {// 2.3.2.1
										if (ychar + charh <= center_y - int(s * 7 * yscale / 16)) {// 2.3.2.1t
										}
										else {// 2.3.2.1.b
											ret.push_back(17);
										}
									}
									else {// 2.3.2.2
										if (ychar + charh <= center_y - int(s * 7 * yscale / 16)) {// 2.3.2.2t
										}
										else {// 2.3.2.2.b
											ret.push_back(17);
										}
									}
								}
								else {// 2.3.2.b
									if (xchar + charw <= center_x + int(s * 3 / 16.0f)) {// 2.3.2.3
										if (ychar + charh <= center_y - int(s * 5 * yscale / 16)) {// 2.3.2.3t
											ret.push_back(17);
										}
										else {// 2.3.2.3.b
											ret.push_back(22);
										}
									}
									else {// 2.3.2.4
										if (ychar + charh <= center_y - int(s * 5 * yscale / 16)) {// 2.3.2.4t
											ret.push_back(17);
										}
										else {// 2.3.2.4.b
											ret.push_back(22);
										}
									}
								}
							}
						}
						else { //2.3b
							if (xchar + charw <= center_x + int(s / 8.0f)) {// 2.3.3
								if (ychar + charh <= center_y - int(s * yscale / 8)) {// 2.3.3t
									if (xchar + charw <= center_x + int(s / 16.0f)) {// 2.3.3.1
										if (ychar + charh <= center_y - int(s * 3 * yscale / 16)) {// 2.3.3.1t
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 2.3.3.1.1
												ret.push_back(18); ret.push_back(19); ret.push_back(21);
												ret.push_back(22); ret.push_back(23); ret.push_back(24);
											}
											else {// 2.3.3.1.2
												ret.push_back(22); ret.push_back(23); ret.push_back(24);
											}
										}
										else {// 2.3.3.1.b
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 2.3.3.1.3
												ret.push_back(19); ret.push_back(21);
												ret.push_back(23); ret.push_back(24); ret.push_back(34); ret.push_back(35);
											}
											else {// 2.3.3.1.4
												ret.push_back(23); ret.push_back(24); ret.push_back(34); ret.push_back(35);
											}
										}
									}
									else {// 2.3.3.2
										if (ychar + charh <= center_y - int(s * 3 * yscale / 16)) {// 2.3.3.2t
											ret.push_back(22); ret.push_back(23);
										}
										else {// 2.3.3.2.b
											if (xchar + charw <= center_x + int(s * 3 / 32.0f)) {// 2.3.3.2.3
												ret.push_back(23);
											}
											else {// 2.3.3.2.4
												ret.push_back(23); ret.push_back(30); ret.push_back(32);
											}
										}
									}
								}
								else {// 2.3.3.b
									if (xchar + charw <= center_x + int(s / 16.0f)) {// 2.3.3.3
										ret.push_back(34); ret.push_back(35);
									}
									else {// 2.3.3.4
										if (ychar + charh <= center_y - int(s*yscale / 16)) {// 2.3.3.4t
											if (xchar + charw <= center_x + int(s * 3 / 32.0f)) {// 2.3.3.4.1
											}
											else {// 2.3.3.4.2
												ret.push_back(30); ret.push_back(31); ret.push_back(32);
											}
										}
										else {// 2.3.3.2.b
											if (xchar + charw <= center_x + int(s * 3 / 32.0f)) {// 2.3.3.4.3
												ret.push_back(35);
											}
											else {// 2.3.3.4.4
												ret.push_back(31); ret.push_back(32);
											}
										}
									}
								}
							}
							else {// 2.3.4
								if (ychar + charh <= center_y - int(s*yscale / 8)) {// 2.3.4t
									if (xchar + charw <= center_x + int(s * 3 / 16.0f)) {// 2.3.4.1
										if (ychar + charh <= center_y - int(s * 3 * yscale / 16)) {// 2.3.4.1t
											ret.push_back(22); ret.push_back(23);
										}
										else {// 2.3.4.1.b
											ret.push_back(23); ret.push_back(30); ret.push_back(32);
										}
									}
									else {// 2.3.4.2
										if (ychar + charh <= center_y - int(s * 3 * yscale / 16)) {// 2.3.4.2t
											ret.push_back(22); ret.push_back(23);
										}
										else {// 2.3.4.2.b
											if (xchar + charw <= center_x + int(s * 7 / 32.0f)) {// 2.3.4.2.3
												ret.push_back(23); ret.push_back(30);
											}
											else {// 2.3.4.2.4
												ret.push_back(23); ret.push_back(30); ret.push_back(33);
											}
										}
									}
								}
								else {// 2.3.4.b
									if (xchar + charw <= center_x + int(s * 3 / 16.0f)) {// 2.3.4.3
										if (ychar + charh <= center_y - int(s*yscale / 16)) {// 2.3.4.3t
											ret.push_back(30); ret.push_back(31); ret.push_back(32);
										}
										else {// 2.3.4.3.b
											ret.push_back(31); ret.push_back(32);
										}
									}
									else {// 2.3.4.4
										if (ychar + charh <= center_y - int(s*yscale / 16)) {// 2.3.4.4t
											if (xchar + charw <= center_x + int(s * 7 / 32.0f)) {// 2.3.4.4.1
												ret.push_back(30); ret.push_back(31);
											}
											else {// 2.3.4.4.2
												ret.push_back(30); ret.push_back(31); ret.push_back(33);
											}
										}
										else {// 2.3.4.4.b
											if (xchar + charw <= center_x + int(s * 7 / 32.0f)) {// 2.3.4.4.3
												ret.push_back(31);
											}
											else {// 2.3.4.4.4
												ret.push_back(31); ret.push_back(33);
											}
										}
									}
								}
							}
						}
					}
					else {// 2.4
						if (ychar + charh <= center_y - int(s*yscale / 4)) {// 2.4t
							if (xchar + charw <= center_x + int(s * 3 / 8.0f)) {// 2.4.1
								if (ychar + charh <= center_y - int(s * 3 * yscale / 8)) {// 2.4.1t
									if (xchar + charw <= center_x + int(s * 5 / 16.0f)) {// 2.4.1.1
										if (ychar + charh <= center_y - int(s * 7 * yscale / 16)) {// 2.4.1.1t
										}
										else {// 2.4.1.1.b
											ret.push_back(17);
										}
									}
									else {// 2.4.1.2
										if (ychar + charh <= center_y - int(s * 7 * yscale / 16)) {// 2.4.1.2t
										}
										else {// 2.4.1.2.b
											ret.push_back(17);
										}
									}
								}
								else {// 2.4.1.b
									if (xchar + charw <= center_x + int(s * 5 / 16.0f)) {// 2.4.1.3
										if (ychar + charh <= center_y - int(s * 5 * yscale / 16)) {// 2.4.1.3t
											ret.push_back(17);
										}
										else {// 2.4.1.3.b
											ret.push_back(22);
										}
									}
									else {// 2.4.1.4
										if (ychar + charh <= center_y - int(s * 5 * yscale / 16)) {// 2.4.1.4t
											ret.push_back(17);
										}
										else {// 2.4.1.4b
											if (xchar + charw <= center_x + int(s * 11 / 32.0f)) {// 2.4.1.4.3
												ret.push_back(22);
											}
											else {// 2.4.1.4.4
												ret.push_back(22); ret.push_back(25);
											}
										}
									}
								}
							}
							else {// 2.4.2
								if (ychar + charh <= center_y - int(s * 3 * yscale / 8)) {// 2.4.2t
									if (xchar + charw <= center_x + int(s * 7 / 16.0f)) {// 2.4.2.1
										if (ychar + charh <= center_y - int(s * 7 * yscale / 16)) {// 2.4.2.1t
										}
										else {// 2.4.2.1.b
											ret.push_back(17);
										}
									}
									else {// 2.4.2.2
										if (ychar + charh <= center_y - int(s * 7 * yscale / 16)) {// 2.4.2.2t
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 2.4.2.2.1
											}
											else {// 2.4.2.2.2
												ret.push_back(16);
											}
										}
										else {// 2.4.2.2.b
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 2.4.2.2.3
												ret.push_back(17);
											}
											else {// 2.4.2.2.4
												ret.push_back(16); ret.push_back(17);
											}
										}
									}
								}
								else {// 2.4.2.b
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 2.4.2.3
										if (ychar + charh <= center_y - int(s * 5 * yscale / 16)) {// 2.4.2.3t
											ret.push_back(17);
										}
										else {// 2.4.2.3.b
											if (xchar + charw <= center_x + int(s * 13 / 32.0f)) {// 2.4.2.3.3
												ret.push_back(22); ret.push_back(25);

											}
										}
									}
									else {// 2.4.2.4
										if (ychar + charh <= center_y - int(s * 5 * yscale / 16)) {// 2.4.2.4t
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 2.4.2.4.1
												ret.push_back(17);
											}
											else {// 2.4.2.4.2
												ret.push_back(16); ret.push_back(17);
											}
										}
										else {// 2.4.2.4.b
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 2.4.2.4.3
											}
											else {// 2.4.2.4.4
												ret.push_back(16);
											}
										}
									}
									}
								}
							}
						else { //2.4b
							if (xchar + charw <= center_x + int(s * 3 / 8.0f)) {// 2.4.3
								if (ychar + charh <= center_y - int(s * yscale / 8)) {// 2.4.3t
									if (xchar + charw <= center_x + int(s * 5 / 16.0f)) {// 2.4.3.1
										if (ychar + charh <= center_y - int(s * 3 * yscale / 16)) {// 2.4.3.1t
											ret.push_back(22); ret.push_back(23);
										}
										else {// 2.4.3.1.b
											ret.push_back(23); ret.push_back(30); ret.push_back(33);
										}
									}
									else {// 2.4.3.2
										if (ychar + charh <= center_y - int(s * 3 * yscale / 16)) {// 2.4.3.2t
											if (xchar + charw <= center_x + int(s * 11 / 32.0f)) {// 2.4.3.2.1
												ret.push_back(22); ret.push_back(23);
											}
											else {// 2.4.3.2.2
												ret.push_back(22); ret.push_back(23); ret.push_back(25);
											}
										}
										else {// 2.4.3.2.b
											if (xchar + charw <= center_x + int(s * 11 / 32.0f)) {// 2.4.3.2.3
												ret.push_back(22); ret.push_back(23);
											}
											else {// 2.4.3.2.4
												ret.push_back(22); ret.push_back(23); ret.push_back(25);
											}
										}
									}
								}
								else {// 2.4.3.b
									if (xchar + charw <= center_x + int(s * 5 / 16.0f)) {// 2.4.3.3
										if (ychar + charh <= center_y - int(s*yscale / 16)) {// 2.4.3.3t
											ret.push_back(30); ret.push_back(31); ret.push_back(33);
										}
										else {// 2.4.3.3.b
											ret.push_back(31); ret.push_back(33);
										}
									}
									else {// 2.4.3.4
									}
								}
							}
							else {// 2.4.4
								if (ychar + charh <= center_y - int(s*yscale / 8)) {// 2.4.4t
									if (xchar + charw <= center_x + int(s * 7 / 16.0f)) {// 2.4.4.1
										if (ychar + charh <= center_y - int(s * 3 * yscale / 16)) {// 2.4.4.1t
											ret.push_back(22); ret.push_back(23); ret.push_back(25);
										}
										else {// 2.4.4.1.b
											ret.push_back(23); ret.push_back(25);
										}
									}
									else {// 2.4.4.2
										if (ychar + charh <= center_y - int(s * 3 * yscale / 16)) {// 2.4.4.2t
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 2.4.4.2.1
											}
											else {//2.4.4.2.2
												ret.push_back(16);
											}
										}
										else {// 2.4.4.2.b
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 2.4.4.2.3
											}
											else {// 1.2.4.2.4
												ret.push_back(16);
											}
										}
									}
								}
								else {// 2.4.4.b
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 2.4.4.3
									}
									else {// 2.4.4.4
										if (ychar + charh <= center_y - int(s*yscale / 16)) {// 2.4.4.4t
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 2.4.4.4.1
											}
											else {// 2.4.4.4.2
												ret.push_back(16);
											}
										}
										else {// 2.4.4.4.b
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 2.4.4.4.3
											}
											else {// 2.2.4.4.4
												ret.push_back(16);
											}
										}
									}
								}
							}
						}
						}
					}
				}
		}
		else {// bottom side
			if (xchar + charw <= center_x) {//3.sector
				if (ychar + charh <= center_y + int(s * yscale / 2)) {// 3.sector top
					if (xchar + charw <= center_x - int(s / 4.0f)) {// 3.1
						if (ychar + charh <= center_y + int(s * yscale / 4)) {// 3.1t
							if (xchar + charw <= center_x - int(s * 3 / 8.0f)) {// 3.1.1
								if (ychar + charh <= center_y + int(s * yscale / 8)) {// 3.1.1t
									if (xchar + charw <= center_x - int(s * 7 / 16.0f)) {// 3.1.1.1
										ret.push_back(15);
									}
									else {// 3.1.1.2
									}
								}
								else {// 3.1.1.b
									if (xchar + charw <= center_x - int(s * 7 / 16.0f)) {// 3.1.1.3
										ret.push_back(15);
									}
									else {// 3.1.1.4
									}
								}
							}
							else {// 3.1.2
							}

						}
						else { //3.1b
							if (xchar + charw <= center_x - int(s * 3 / 8.0f)) {// 3.1.3
								if (ychar + charh <= center_y + int(s * 3 * yscale / 8)) {// 3.1.3t
									if (xchar + charw <= center_x - int(s * 7 / 16.0f)) {// 3.1.3.1
										if (ychar + charh <= center_y + int(s * 5 * yscale / 16)) {// 3.1.3.1t
											ret.push_back(15);
										}
										else {// 3.1.3.1.b
											ret.push_back(15); ret.push_back(37); ret.push_back(53);
										}
									}
									else {// 3.1.3.2
										if (ychar + charh <= center_y + int(s * 5 * yscale / 16)) {// 3.1.3.2t
										}
										else {// 3.1.3.2.b
											ret.push_back(37);
										}
									}
								}
								else {// 3.1.3.b
									if (xchar + charw <= center_x - int(s * 7 / 16.0f)) {// 3.1.3.3
										if (ychar + charh <= center_y + int(s * 7 * yscale / 16)) {// 3.1.3.3t
											ret.push_back(15); ret.push_back(37); ret.push_back(53);
										}
										else {// 3.1.3.3.b
											ret.push_back(53);
										}
									}
									else {// 3.1.3.4
										if (ychar + charh <= center_y - int(s * 9 * yscale / 16)) {// 3.1.3.4t
											if (xchar + charw <= center_x - int(s * 13 / 32.0f)) {// 3.1.3.4.1
												ret.push_back(37); ret.push_back(53);
											}
											else {// 3.1.3.4.b
												ret.push_back(53);
											}
										}
									}
								}
							}
							else {// 3.1.4
								if (ychar + charh <= center_y + int(s * 3 * yscale / 8)) {// 3.1.4t
									if (xchar + charw <= center_x - int(s * 5 / 16.0f)) {// 3.1.4.1
										if (ychar + charh <= center_y + int(s * 5 * yscale / 16)) {// 3.1.4.1t
										}
										else {// 3.1.4.1.b
											if (xchar + charw <= center_x - int(s * 11 / 32.0f)) {// 3.1.4.1.3
												ret.push_back(37);
											}
											else {// 3.1.4.1.4
												ret.push_back(37); ret.push_back(38);
											}
										}
									}
									else {// 3.1.4.2
										if (ychar + charh <= center_y + int(s * 5 * yscale / 16)) {// 3.1.4.2
										}
										else {// 3.1.4.2.b
											ret.push_back(37); ret.push_back(38);
										}
									}
								}
								else {// 3.1.4.b
									if (xchar + charw <= center_x - int(s * 5 / 16.0f)) {// 3.1.4.3
										if (ychar + charh <= center_y + int(s * 7 * yscale / 16)) {// 3.1.4.3t
											if (xchar + charw <= center_x - int(s * 11 / 32.0f)) {// 3.1.4.3.1
												ret.push_back(37);
											}
											else {// 3.1.4.3.2
												ret.push_back(37);
												ret.push_back(38);
											}
										}
										else {// 3.1.4.3.b
											if (xchar + charw <= center_x - int(s * 11 / 32.0f)) {// 3.1.4.3.3
												ret.push_back(53);
											}
											else {// 3.1.4.3.4
												ret.push_back(38); ret.push_back(41); ret.push_back(42);
											}

										}
									}
									else {// 3.1.4.4
										if (ychar + charh <= center_y + int(s * 7 * yscale / 16)) {// 3.1.4.4t
											ret.push_back(37); ret.push_back(38);
										}
										else {// 3.1.4.4.b
											ret.push_back(38); ret.push_back(41); ret.push_back(42);
										}
									}
								}
							}
						}
					}
					else {// 3.2
						if (ychar + charh <= center_y + int(s *yscale / 4)) {// 3.2t
							if (xchar + charw <= center_x - int(s / 8.0f)) {// 3.2.1
							}
							else {// 3.2.2
								if (ychar + charh <= center_y + int(s*yscale / 8)) {// 3.2.2t
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 3.2.2.1
										if (ychar + charh <= center_y + int(s*yscale / 16)) {// 3.2.2.1t
										}
										else {// 3.2.2.1.b
											if (xchar + charw <= center_x - int(s * 3 / 32.0f)) {// 3.2.2.1.3
											}
											else {// 3.2.2.1.4
												ret.push_back(34);
											}
										}
									}
									else {// 3.2.2.2
										ret.push_back(34);
									}
								}
								else {// 3.2.2.b
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 3.2.2.3
										if (ychar + charh <= center_y + int(s * 3 * yscale / 16)) {// 3.2.2.3t
											if (xchar + charw <= center_x - int(s * 3 / 32.0f)) {// 3.2.2.3.1
											}
											else {// 3.2.2.3.2
												ret.push_back(34);
											}
										}
										else {// 3.2.2.3.b
											ret.push_back(34);
										}
									}
									else {// 3.2.2.4
										ret.push_back(34);
									}
								}
							}

						}
						else { //3.2b
							if (xchar + charw <= center_x - int(s / 8.0f)) {// 3.2.3
								if (ychar + charh <= center_y + int(s * 3 * yscale / 8)) {// 3.2.3t
									if (xchar + charw <= center_x - int(s * 3 / 16.0f)) {// 3.2.3.1

									}
									else {// 3.2.3.2
										if (ychar + charh <= center_y + int(s * 5 * yscale / 16)) {// 3.2.3.2t
										}
										else {// 3.2.3.2.b
											if (xchar + charw <= center_x - int(s * 5 / 32.0f)) {// 3.2.3.2.3
											}
											else {// 3.2.3.2.4
												ret.push_back(34); ret.push_back(36);
											}
										}
									}
								}
								else {// 3.2.3.b
									if (xchar + charw <= center_x - int(s * 3 / 16.0f)) {// 3.2.3.3
										if (ychar + charh <= center_y + int(s * 7 * yscale / 16)) {// 3.2.3.3t
										}
										else {// 3.2.3.3.b
											ret.push_back(41); ret.push_back(42);

										}
									}
									else {// 3.2.3.4
										if (ychar + charh <= center_y + int(s * 7 * yscale / 16)) {// 3.2.3.4t
											if (xchar + charw <= center_x - int(s * 5 / 32.0f)) {// 3.2.3.4.1

											}
											else {// 3.2.3.4.2
												ret.push_back(34);
												ret.push_back(36);
											}
										}
										else {// 3.2.3.2.b
											ret.push_back(41); ret.push_back(42);
										}
									}
								}
							}
							else {// 3.2.4
								if (ychar + charh <= center_y + int(s * 3 * yscale / 8)) {// 3.2.4t
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 3.2.4.1
										if (ychar + charh <= center_y + int(s * 5 * yscale / 16)) {// 3.2.4.1t
											ret.push_back(34);
										}
										else {// 3.2.4.1.b
											ret.push_back(34); ret.push_back(36);
										}
									}
									else {// 3.2.4.2
										if (ychar + charh <= center_y + int(s * 5 * yscale / 16)) {// 3.2.4.2t
											if (xchar + charw <= center_x - int(s / 32.0f)) {// 3.2.4.2.1
												ret.push_back(34);
											}
											else {// 3.2.4.2.2
											}
										}
										else {// 3.2.4.2.b
											if (xchar + charw <= center_x - int(s / 32.0f)) {// 3.2.4.2.3
												ret.push_back(36);
											}
											else {// 3.2.4.2.4
												ret.push_back(36); ret.push_back(43); ret.push_back(44);
											}
										}
									}
								}
								else {// 3.2.4.b
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 3.2.4.3
										if (ychar + charh <= center_y + int(s * 7 * yscale / 16)) {// 3.2.4.3t
											ret.push_back(34); ret.push_back(36);
										}
										else {// 3.2.4.3.b
											ret.push_back(41); ret.push_back(42);

										}
									}
									else {// 3.2.4.4
										if (ychar + charh <= center_y + int(s * 7 * yscale / 16)) {// 3.2.4.4t
											if (xchar + charw <= center_x - int(s / 32.0f)) {// 3.2.4.4.1
												ret.push_back(36); ret.push_back(43);
											}
											else {// 3.2.4.4.2
												ret.push_back(36); ret.push_back(43); ret.push_back(44);
											}
										}
										else {// 3.2.4.4.b
											if (xchar + charw <= center_x - int(s * 9 / 32.0f)) {// 3.2.4.4.3
												ret.push_back(41); ret.push_back(42); ret.push_back(43);
											}
											else {// 3.2.4.4.4
												ret.push_back(41); ret.push_back(42); ret.push_back(43); ret.push_back(44);
											}
										}
									}
								}
							}
						}
					}
				}
				else {//3.b
					if (xchar + charw <= center_x - int(s / 4.0f)) {// 3.3
						if (ychar + charh <= center_y + int(s * 3 * yscale / 4)) {// 3.3t
							if (xchar + charw <= center_x - int(s * 3 / 8.0f)) {// 3.3.1
								if (ychar + charh <= center_y + int(s * 5 * yscale / 8)) {// 3.3.1t
									if (xchar + charw <= center_x - int(s * 7 / 16.0f)) {// 3.3.1.1
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 3.3.1.1t
											if (xchar + charw <= center_x - int(s * 15 / 32.0f)) {// 3.3.1.1.1
											}
											else {// 3.3.1.1.2
												ret.push_back(53);
											}
										}
										else {// 3.3.1.1.b
										}
									}
									else {// 3.3.1.2
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 3.3.1.2t
											ret.push_back(53);
										}
										else {// 3.3.1.2.b
											if (xchar + charw <= center_x - int(s * 13 / 32.0f)) {// 3.3.1.2.3
											}
											else {// 3.3.1.2.4
												ret.push_back(53);
											}
										}
									}
								}
								else {// 3.3.1.b
								}
							}
							else {// 3.3.2
								if (ychar + charh <= center_y + int(s * 5 * yscale / 8)) {// 3.3.2t
									if (xchar + charw <= center_x - int(s * 5 / 16.0f)) {// 3.3.2.1
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 3.3.2.1t
											if (xchar + charw <= center_x - int(s * 11 / 32.0f)) {// 3.3.2.1.1
												ret.push_back(53);
											}
											else {// 3.3.2.1.2
												ret.push_back(38); ret.push_back(41); ret.push_back(42); ret.push_back(53);
											}
										}
										else {// 3.3.2.1.b
											if (xchar + charw <= center_x - int(s * 11 / 32.0f)) {// 3.3.2.1.3
												ret.push_back(53);
											}
											else {// 3.3.2.1.4
												ret.push_back(38); ret.push_back(53);
											}
										}
									}
									else {// 3.3.2.2
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 3.3.2.2t
											if (xchar + charw <= center_x - int(s * 9 / 32.0f)) {// 3.3.2.2.1
												ret.push_back(38); ret.push_back(41); ret.push_back(42);
											}
											else {// 3.3.2.2.2
												ret.push_back(38); ret.push_back(41); ret.push_back(42); ret.push_back(49); ret.push_back(51);
											}
										}
										else {// 3.3.2.2.b
											if (xchar + charw <= center_x - int(s * 9 / 32.0f)) {// 3.3.2.2.3
												ret.push_back(38); ret.push_back(53);
											}
											else {// 3.3.2.2.4
												ret.push_back(38); ret.push_back(49); ret.push_back(50); ret.push_back(51); ret.push_back(53);
											}
										}
									}
								}
								else {// 3.3.2.b
									if (xchar + charw <= center_x - int(s * 5 / 16.0f)) {// 3.3.2.3
										if (ychar + charh <= center_y + int(s * 11 * yscale / 16)) {// 3.3.2.3t
											if (xchar + charw <= center_x - int(s * 11 / 32.0f)) {// 3.3.2.3.1
												ret.push_back(53);
											}
											else {// 3.3.2.3.2
												ret.push_back(38); ret.push_back(53);
											}
										}
										else {// 3.3.2.3.b
										}
									}
									else {// 3.3.2.4
										if (ychar + charh <= center_y + int(s * 11 * yscale / 16)) {// 3.3.2.4t
											if (xchar + charw <= center_x - int(s * 9 / 32.0f)) {// 3.3.2.4.1
												ret.push_back(38); ret.push_back(53);
											}
											else {// 3.3.2.4.2
												ret.push_back(38); ret.push_back(50); ret.push_back(51); ret.push_back(53);
											}
										}
										else {// 3.3.2.4.b
											ret.push_back(53);
										}
									}
								}
							}
						}
						else { //3.3b
							if (xchar + charw <= center_x - int(s * 3 / 8.0f)) {// 3.3.3
							}
							else {// 3.3.4
								if (ychar + charh <= center_y + int(s * 3 * yscale / 4)) {// 3.3.4t
									if (xchar + charw <= center_x - int(s * 5 / 16.0f)) {// 3.3.4.1
									}
									else {// 3.3.4.2
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 3.3.4.2t
											if (xchar + charw <= center_x - int(s * 9 / 32.0f)) {// 3.3.4.2.1
											}
											else {// 3.3.4.2.2
												ret.push_back(53);
											}
										}
										else {// 3.3.4.2.b
										}
									}
								}
								else {// 3.3.4.b		
								}
							}
						}
					}
					else {// 3.4
						if (ychar + charh <= center_y + int(s * 3 * yscale / 4)) {// 3.4t
							if (xchar + charw <= center_x - int(s / 8.0f)) {// 3.4.1
								if (ychar + charh <= center_y + int(s * 5 * yscale / 8)) {// 3.4.1t
									if (xchar + charw <= center_x - int(s * 3 / 16.0f)) {// 3.4.1.1
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 3.4.1.1t
											ret.push_back(41); ret.push_back(42); ret.push_back(49); ret.push_back(51);
										}
										else {// 3.4.1.1.b
											ret.push_back(49); ret.push_back(50); ret.push_back(51);
										}
									}
									else {// 3.4.1.2
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 3.4.1.2t
											ret.push_back(41); ret.push_back(42); ret.push_back(49);
										}
										else {// 3.4.1.2.b
											ret.push_back(49); ret.push_back(50);
										}
									}
								}
								else {// 3.4.1.b
									if (xchar + charw <= center_x - int(s * 3 / 16.0f)) {// 3.4.1.3
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 3.4.1.3t
											if (xchar + charw <= center_x - int(s * 7 / 32.0f)) {// 3.4.1.3.1
												ret.push_back(50); ret.push_back(51); ret.push_back(53);
											}
											else {// 3.4.1.3.2
												ret.push_back(50); ret.push_back(51);
											}
										}
										else {// 3.4.1.3.b
											ret.push_back(53);
										}
									}
									else {// 3.4.1.4
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 3.4.1.4t
											ret.push_back(50);
										}
										else {// 3.4.1.4.b
											if (xchar + charw <= center_x - int(s * 5 / 32.0f)) {// 3.4.1.4.3
												ret.push_back(53);
											}
											else {// 3.4.1.4.4
											}
										}
									}
								}
							}
							else {// 3.4.2
								if (ychar + charh <= center_y + int(s * 5 * yscale / 8)) {// 3.4.2t
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 3.4.2.1
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 3.4.2.1t
											ret.push_back(41); ret.push_back(42); ret.push_back(49);
										}
										else {// 3.4.2.1.b
											ret.push_back(49); ret.push_back(50);
										}
									}
									else {// 3.4.2.2
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 3.4.2.2t
											if (xchar + charw <= center_x - int(s / 32.0f)) {// 3.4.2.2.1
												ret.push_back(41); ret.push_back(42); ret.push_back(43); ret.push_back(49);
											}
											else {// 3.4.2.2.2
												ret.push_back(41); ret.push_back(42); ret.push_back(43); ret.push_back(44); ret.push_back(49);
											}
										}
										else {// 3.4.2.2.b
											ret.push_back(49); ret.push_back(50);
										}
									}
								}
								else {// 3.4.2.b
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 3.4.2.3
										if (ychar + charh <= center_y + int(s * 11 * yscale / 16)) {// 3.4.2.3t
											ret.push_back(50);
										}
										else {// 3.4.2.3.b
										}
									}
									else {// 3.4.2.4
										if (ychar + charh <= center_y + int(s * 11 * yscale / 16)) {// 3.4.2.4t
											if (xchar + charw <= center_x - int(s / 32.0f)) {// 3.4.2.4.1
												ret.push_back(50);
											}
											else {// 3.4.2.4.2
												ret.push_back(50); ret.push_back(55); ret.push_back(57);
											}
										}
										else {// 3.4.2.4.b
											if (xchar + charw <= center_x - int(s / 32.0f)) {// 3.4.2.4.3

											}
											else {// 3.4.2.4.4
												ret.push_back(55); ret.push_back(57);
											}
										}
									}
								}
							}
						}
						else { //3.4b
							if (xchar + charw <= center_x - int(s / 8.0f)) {// 3.4.3
								if (ychar + charh <= center_y + int(s * 7 * yscale / 8)) {// 3.4.3t
									if (xchar + charw <= center_x - int(s * 3 / 16.0f)) {// 3.4.3.1
										if (ychar + charh <= center_y + int(s * 13 * yscale / 16)) {// 3.4.3.1t
											ret.push_back(53);
										}
										else {// 3.4.3.1.b
											if (xchar + charw <= center_x - int(s * 7 / 32.0f)) {// 3.4.3.1.3

											}
											else {// 3.4.3.1.4
												ret.push_back(53);
											}
										}
									}
									else {// 3.4.3.2
										ret.push_back(53);

									}
								}
								else {// 3.4.3.b
									if (xchar + charw <= center_x - int(s * 3 / 16.0f)) {// 3.4.3.3
									}
									else {// 3.4.3.4
										if (ychar + charh <= center_y + int(s * 15 * yscale / 16)) {// 3.4.3.4t
											ret.push_back(53);
										}
										else {// 3.4.3.4.b
										}
									}
								}
							}
							else {// 3.4.4
								if (ychar + charh <= center_y + int(s * 7 * yscale / 8)) {// 3.4.4t
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 3.4.4.1
										if (ychar + charh <= center_y + int(s * 13 * yscale / 16)) {// 3.4.4.1t
										}
										else {// 3.4.4.1.b
											ret.push_back(53);
										}
									}
									else {// 3.4.4.2
										if (ychar + charh <= center_y + int(s * 13 * yscale / 16)) {// 3.4.4.2t
											if (xchar + charw <= center_x - int(s / 32.0f)) {// 3.4.4.2.1
											}
											else {//3.4.4.2.2
												ret.push_back(57);
											}
										}
										else {// 3.4.4.2.b
											if (xchar + charw <= center_x - int(s / 32.0f)) {// 3.4.4.2.3
											}
											else {// 3.4.4.2.4
												ret.push_back(57);
											}
										}
									}
								}
								else {// 3.4.4.b
									if (xchar + charw <= center_x - int(s / 16.0f)) {// 3.4.4.3
										ret.push_back(53);
									}
									else {// 3.4.4.4
										if (ychar + charh <= center_y + int(s * 15 * yscale / 16)) {// 3.4.4.4t
											if (xchar + charw <= center_x - int(s / 32.0f)) {// 3.4.4.4.1
												ret.push_back(53);
											}
											else {// 3.4.4.4.2
												ret.push_back(57);
											}
										}
										else {// 3.4.4.4.b
											if (xchar + charw <= center_x - int(s / 32.0f)) {// 3.4.4.4.3
												ret.push_back(53);
											}
											else {// 3.4.4.4.4
												ret.push_back(53); ret.push_back(56); ret.push_back(57);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else {//4.sector
				if (ychar + charh <= center_y + int(s * yscale / 2)) {// 4.sector top
					if (xchar + charw <= center_x + int(s / 4.0f)) {// 4.1
						if (ychar + charh <= center_y + int(s * yscale / 4)) {// 4.1t
							if (xchar + charw <= center_x + int(s / 8.0f)) {// 4.1.1
								if (ychar + charh <= center_y + int(s * yscale / 8)) {// 4.1.1t
									if (xchar + charw <= center_x + int(s / 16.0f)) {// 4.1.1.1
										if (ychar + charh <= center_y + int(s*yscale / 16)) {// 4.1.1.1t
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 4.1.1.1.1
												ret.push_back(34); ret.push_back(35);
											}
											else {// 4.1.1.1.2
												ret.push_back(35);
											}
										}
										else {// 4.1.1.1.b
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 4.1.1.1.3
											}
											else {// 4.1.1.1.4
												ret.push_back(35);
											}
										}
									}
									else {// 4.1.1.2
										if (ychar + charh <= center_y + int(s*yscale / 16)) {// 4.1.1.2t
											if (xchar + charw <= center_x + int(s * 3 / 32.0f)) {// 4.1.1.2.1
												ret.push_back(35);
											}
											else {// 4.1.1.2.2
											}
										}
										else {// 4.1.1.2.b
											ret.push_back(35);
										}
									}
								}
								else {// 4.1.1.b
									if (xchar + charw <= center_x + int(s / 16.0f)) {// 4.1.1.3
										if (ychar + charh <= center_y + int(s * 3 * yscale / 16)) {// 4.1.1.3t
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 4.1.1.3.1
											}
											else {// 4.1.1.3.2
												ret.push_back(35);
											}
										}
										else {// 4.1.1.3.b
										}
									}
									else {// 4.1.1.4
										ret.push_back(35);
									}
								}
							}
							else {// 4.1.2
								if (ychar + charh <= center_y + int(s*yscale / 8)) {// 4.1.2t
								}
								else {// 4.1.2.b
									if (xchar + charw <= center_x + int(s * 3 / 16.0f)) {// 4.1.2.3
										if (ychar + charh <= center_y + int(s * 13 * yscale / 16)) {// 4.1.2.3t
										}
										else {// 4.1.2.3.b
											if (xchar + charw <= center_x + int(s * 5 / 32.0f)) {// 4.1.2.3.3
												ret.push_back(35);
											}
											else {// 4.1.2.3.4
											}
										}
									}
									else {// 4.1.2.4
									}
								}
							}
						}
						else { //4.1b
							if (xchar + charw <= center_x + int(s / 8.0f)) {// 4.1.3
								if (ychar + charh <= center_y + int(s * 3 * yscale / 8)) {// 4.1.3t
									if (xchar + charw <= center_x + int(s / 16.0f)) {// 4.1.3.1
										if (ychar + charh <= center_y + int(s * 5 * yscale / 16)) {// 4.1.3.1t
										}
										else {// 4.1.3.1.b
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 4.1.3.1.3
												ret.push_back(36); ret.push_back(43); ret.push_back(44); ret.push_back(47); ret.push_back(48);
											}
											else {// 4.1.3.1.4
												ret.push_back(36); ret.push_back(47); ret.push_back(48);
											}
										}
									}
									else {// 4.1.3.2
										if (ychar + charh <= center_y + int(s * 5 * yscale / 16)) {// 4.1.3.2t
											ret.push_back(35);
										}
										else {// 4.1.3.2.b
											if (xchar + charw <= center_x + int(s * 3 / 32.0f)) {// 4.1.3.2.3
												ret.push_back(36);
											}
											else {// 4.1.3.2.4
												ret.push_back(35); ret.push_back(36);
											}
										}
									}
								}
								else {// 4.1.3.b
									if (xchar + charw <= center_x + int(s / 16.0f)) {// 4.1.3.3
										if (ychar + charh <= center_y + int(s * 7 * yscale / 16)) {// 4.1.3.3t
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 4.1.3.3.1
												ret.push_back(36); ret.push_back(43); ret.push_back(44); ret.push_back(47); ret.push_back(48);
											}
											else {// 4.1.3.3.2
												ret.push_back(36); ret.push_back(47); ret.push_back(48);
											}
										}
										else {// 4.1.3.3.b
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 4.1.3.3.3
												ret.push_back(42); ret.push_back(43); ret.push_back(44); ret.push_back(46); ret.push_back(47); ret.push_back(48);
											}
											else {// 4.1.3.3.4
												ret.push_back(45); ret.push_back(46); ret.push_back(47); ret.push_back(48);
											}
										}
									}
									else {// 4.1.3.4
										if (ychar + charh <= center_y + int(s * 7 * yscale / 16)) {// 4.1.3.4t
											if (xchar + charw <= center_x + int(s * 3 / 32.0f)) {// 4.1.3.4.1
												ret.push_back(36); ret.push_back(47);
											}
											else {// 4.1.3.4.2
												ret.push_back(35); ret.push_back(36);
											}
										}
										else {// 4.1.3.4.b
											if (xchar + charw <= center_x + int(s * 3 / 32.0f)) {// 4.1.3.4.3
												ret.push_back(45); ret.push_back(46); ret.push_back(47);
											}
											else {// 4.1.3.4.4
												ret.push_back(45); ret.push_back(46);
											}
										}
									}
								}
							}
							else {// 4.1.4
								if (ychar + charh <= center_y + int(s * 3 * yscale / 8)) {// 4.1.4t
									if (xchar + charw <= center_x + int(s * 3 / 16.0f)) {// 4.1.4.1
										if (ychar + charh <= center_y + int(s * 5 * yscale / 16)) {// 4.1.4.1t
											if (xchar + charw <= center_x + int(s * 5 / 32.0f)) {// 4.1.4.1.1
												ret.push_back(35);
											}
											else {// 4.1.4.1.2
											}
										}
										else {// 4.1.4.1.b
											ret.push_back(35); ret.push_back(36);
										}
									}
									else {// 4.1.4.2
									}
								}
								else {// 4.1.4.b
									if (xchar + charw <= center_x + int(s * 3 / 16.0f)) {// 4.1.4.3
										if (ychar + charh <= center_y + int(s * 7 * yscale / 16)) {// 4.1.4.3t
											ret.push_back(35); ret.push_back(36);
										}
										else {// 4.1.4.3.b
											ret.push_back(45); ret.push_back(46);
										}
									}
									else {// 4.1.4.4
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 4.1.4.4t
										}
										else {// 4.1.4.4.b
											ret.push_back(45);
											ret.push_back(46);
										}
									}
								}
							}
						}
					}
					else {// 4.2
						if (ychar + charh <= center_y + int(s * yscale / 4)) {// 4.2t
							if (xchar + charw <= center_x + int(s * 3 / 8.0f)) {// 4.2.1
							}
							else {// 4.2.2
								if (ychar + charh <= center_y + int(s*yscale / 8)) {// 4.2.2t
									if (xchar + charw <= center_x + int(s * 7 / 16.0f)) {// 4.2.2.1
									}
									else {// 4.2.2.2
										if (ychar + charh <= center_y + int(s*yscale / 16)) {// 4.2.2.2t
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 4.2.2.2.1
											}
											else {// 4.2.2.2.2
												ret.push_back(16);
											}
										}
										else {// 4.2.2.2.b
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 4.2.2.2.3
											}
											else {// 4.2.2.2.4
												ret.push_back(16);
											}
										}
									}
								}
								else {// 4.2.2.b
									if (xchar + charw <= center_x + int(s * 15 / 16.0f)) {// 4.2.2.3
									}
									else {// 4.2.2.4
										if (ychar + charh <= center_y + int(s * 3 * yscale / 16)) {// 4.2.2.4t
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 4.2.2.4.1
											}
											else {// 4.2.2.4.2
												ret.push_back(16);
											}
										}
										else {// 4.2.2.4.b
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 4.2.2.4.3
											}
											else {// 4.2.2.4.4
												ret.push_back(16);
											}
										}
									}
								}
							}
						}
						else { //4.2b
							if (xchar + charw <= center_x + int(s * 3 / 8.0f)) {// 4.2.3
								if (ychar + charh <= center_y + int(s * 3 * yscale / 8)) {// 4.2.3t
									if (xchar + charw <= center_x + int(s * 5 / 16.0f)) {// 4.2.3.1
										if (ychar + charh <= center_y + int(s * 5 * yscale / 16)) {// 4.2.3.1t

										}
										else {// 4.2.3.1.b
											if (xchar + charw <= center_x + int(s * 9 / 32.0f)) {// 4.2.3.1.3
											}
											else {// 4.2.3.1.4
												ret.push_back(39); ret.push_back(40);
											}
										}
									}
									else {// 4.2.3.2
										if (ychar + charh <= center_y + int(s * 5 * yscale / 16)) {// 4.2.3.2t
										}
										else {// 4.2.3.2.b
											ret.push_back(39); ret.push_back(40);
										}
									}
								}
								else {// 4.2.3.b
									if (xchar + charw <= center_x + int(s * 5 / 16.0f)) {// 4.2.3.3
										if (ychar + charh <= center_y + int(s * 7 * yscale / 16)) {// 4.2.3.3t
											if (xchar + charw <= center_x + int(s * 9 / 32.0f)) {// 4.2.3.3.1
											}
											else {// 4.2.3.3.2
												ret.push_back(39); ret.push_back(40);
											}
										}
										else {// 4.2.3.3.b
											if (xchar + charw <= center_x + int(s * 9 / 32.0f)) {// 4.2.3.3.1
												ret.push_back(45); ret.push_back(46);
											}
											else {// 4.2.3.3.2
												ret.push_back(40); ret.push_back(45); ret.push_back(46);
											}
										}
									}
									else {// 4.2.3.4
										if (ychar + charh <= center_y + int(s * 7 * yscale / 16)) {// 4.2.3.4t
											ret.push_back(39); ret.push_back(40);
										}
										else {// 4.2.3.4.b
											ret.push_back(40); ret.push_back(45); ret.push_back(46);
										}
									}
								}
							}
							else {// 4.2.4
								if (ychar + charh <= center_y + int(s * 3 * yscale / 8)) {// 4.2.4t
									if (xchar + charw <= center_x + int(s * 7 / 16.0f)) {// 4.2.4.1
										if (ychar + charh <= center_y + int(s * 5 * yscale / 16)) {// 4.2.4.1t
										}
										else {// 4.2.4.1.b
											ret.push_back(39);
										}
									}
									else {// 4.2.4.2
										if (ychar + charh <= center_y + int(s * 5 * yscale / 16)) {// 4.2.4.2t
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 4.2.4.2.1
											}
											else {//4.2.4.2.2
												ret.push_back(16);
											}
										}
										else {// 4.2.4.2.b
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 4.2.4.2.3
												ret.push_back(39);
											}
											else {// 4.2.4.2.4
												ret.push_back(16); ret.push_back(39); ret.push_back(54);
											}
										}
									}
								}
								else {// 4.2.4.b
									if (xchar + charw <= center_x + int(s * 7 / 16.0f)) {// 4.2.4.3
										if (ychar + charh <= center_y + int(s * 7 * yscale / 16)) {// 4.2.4.3t
											if (xchar + charw <= center_x + int(s * 13 / 32.0f)) {// 4.2.4.3.1
												ret.push_back(39);
											}
											else {// 4.2.4.3.2
												ret.push_back(39); ret.push_back(54);
											}
										}
										else {// 4.2.4.3.b
											ret.push_back(54);
										}
									}
									else {// 4.2.4.4
										if (ychar + charh <= center_y + int(s * 7 * yscale / 16)) {// 4.2.4.4t
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 4.2.4.4.1
												ret.push_back(39); ret.push_back(54);
											}
											else {// 4.2.4.4.2
												ret.push_back(16); ret.push_back(39); ret.push_back(54);
											}
										}
										else {// 4.2.4.4.b
											ret.push_back(54);
										}
									}
								}
							}
						}
					}
				}
				else {//4.b
					if (xchar + charw <= center_x + int(s / 4.0f)) {// 4.3
						if (ychar + charh <= center_y + int(s * 3 * yscale / 4)) {// 4.3t
							if (xchar + charw <= center_x + int(s / 8.0f)) {// 4.3.1
								if (ychar + charh <= center_y + int(s * 5 * yscale / 8)) {// 4.3.1t
									if (xchar + charw <= center_x + int(s / 16.0f)) {// 4.3.1.1
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 4.3.1.1t
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 4.3.1.1.1
												ret.push_back(42); ret.push_back(44); ret.push_back(46); ret.push_back(48); ret.push_back(49);
											}
											else {// 4.3.1.1.2
												ret.push_back(45); ret.push_back(46); ret.push_back(47); ret.push_back(48); ret.push_back(49);
											}
										}
										else {// 4.3.1.1.b
											ret.push_back(49); ret.push_back(50);
										}
									}
									else {// 4.3.1.2
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 4.3.1.2t
											if (xchar + charw <= center_x + int(s * 3 / 32.0f)) {// 4.3.1.2.1
												ret.push_back(45); ret.push_back(46); ret.push_back(47); ret.push_back(49);
											}
											else {// 4.3.1.2.2
												ret.push_back(45); ret.push_back(46); ret.push_back(49);
											}
										}
										else {// 4.3.1.2.b
											ret.push_back(49); ret.push_back(50);
										}
									}
								}
								else {// 4.3.1.b
									if (xchar + charw <= center_x + int(s / 16.0f)) {// 4.3.1.3
										if (ychar + charh <= center_y + int(s * 11 * yscale / 16)) {// 4.3.1.3t
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 4.3.1.3.1
												ret.push_back(50); ret.push_back(55); ret.push_back(57); ret.push_back(58);
											}
											else {// 4.3.1.3.2
												ret.push_back(50); ret.push_back(55); ret.push_back(58);
											}
										}
										else {// 4.3.1.3.b
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 4.3.1.3.3
												ret.push_back(50); ret.push_back(55); ret.push_back(57); ret.push_back(58);
											}
											else {// 4.3.1.3.4
												ret.push_back(55); ret.push_back(58);
											}
										}
									}
									else {// 4.3.1.4
										if (ychar + charh <= center_y + int(s * 11 * yscale / 16)) {// 4.3.1.4t
											ret.push_back(50);
										}
										else {// 4.3.1.4.b
										}
									}
								}
							}
							else {// 4.3.2
								if (ychar + charh <= center_y + int(s * 5 * yscale / 8)) {// 4.3.2t
									if (xchar + charw <= center_x + int(s * 3 / 16.0f)) {// 4.3.2.1
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 4.3.2.1t
											ret.push_back(45); ret.push_back(46); ret.push_back(49);
										}
										else {// 4.3.2.1.b
											ret.push_back(49); ret.push_back(50);
										}
									}
									else {// 4.3.2.2
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 4.3.2.2t
											if (xchar + charw <= center_x + int(s * 7 / 32.0f)) {// 4.3.2.2.1
												ret.push_back(45); ret.push_back(46); ret.push_back(49);
											}
											else {// 4.3.2.2.2
												ret.push_back(45); ret.push_back(46); ret.push_back(49); ret.push_back(52);
											}
										}
										else {// 4.3.2.2.b
											if (xchar + charw <= center_x + int(s * 9 / 32.0f)) {// 4.3.2.2.3
												ret.push_back(49); ret.push_back(50);
											}
											else {// 4.3.2.2.4
												ret.push_back(49); ret.push_back(50); ret.push_back(52);
											}
										}
									}
								}
								else {// 4.3.2.b
									if (xchar + charw <= center_x + int(s * 3 / 16.0f)) {// 4.3.2.3
										if (ychar + charh <= center_y + int(s * 11 * yscale / 16)) {// 4.3.2.3t
											ret.push_back(50);
										}
										else {// 4.3.2.3.b
										}
									}
									else {// 4.3.2.4
										if (ychar + charh <= center_y + int(s * 11 * yscale / 16)) {// 4.3.2.4t
											if (xchar + charw <= center_x + int(s * 7 / 32.0f)) {// 4.3.2.4.1
												ret.push_back(50);
											}
											else {// 4.3.2.4.2
												ret.push_back(52); ret.push_back(50);
											}
										}
										else {// 4.3.2.4.b
											ret.push_back(54);
										}
									}
								}
							}
						}
						else { //4.3b
							if (xchar + charw <= center_x + int(s / 8.0f)) {// 4.3.3
								if (ychar + charh <= center_y + int(s * 7 * yscale / 8)) {// 4.3.3t
									if (xchar + charw <= center_x + int(s / 16.0f)) {// 4.3.3.1
										if (ychar + charh <= center_y + int(s * 13 * yscale / 16)) {// 4.3.3.1t
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 4.3.3.1.1
												ret.push_back(57); ret.push_back(58);
											}
											else {// 4.3.3.1.2
												ret.push_back(58);
											}
										}
										else {// 4.3.3.1.b
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 4.3.3.1.3
												ret.push_back(57); ret.push_back(58);
											}
											else {// 4.3.3.1.4
												ret.push_back(58);
											}
										}
									}
									else {// 4.3.3.2
										if (ychar + charh <= center_y + int(s * 13 * yscale / 16)) {// 4.3.3.2t
										}
										else {// 4.3.3.2.b
											if (xchar + charw <= center_x + int(s * 3 / 32.0f)) {// 4.3.3.2.3
											}
											else {// 4.3.3.2.4
												ret.push_back(54);
											}
										}
									}
								}
								else {// 4.3.3.b
									if (xchar + charw <= center_x + int(s / 16.0f)) {// 4.3.3.3
										if (ychar + charh <= center_y + int(s * 15 * yscale / 16)) {// 4.3.3.3t
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 4.3.3.3.1
												ret.push_back(57); ret.push_back(58);
											}
											else {// 4.3.3.3.2
												ret.push_back(58);
											}
										}
										else {// 4.3.3.3.b
											if (xchar + charw <= center_x + int(s / 32.0f)) {// 4.3.3.3.3
												ret.push_back(53); ret.push_back(57); ret.push_back(58); ret.push_back(54); ret.push_back(56);
											}
											else {// 4.3.3.3.4
												ret.push_back(58); ret.push_back(54); ret.push_back(56);
											}
										}
									}
									else {// 4.3.3.4
										ret.push_back(54);
									}
								}
							}
							else {// 4.3.4
								if (ychar + charh <= center_y + int(s * 7 * yscale / 8)) {// 4.3.4t
									if (xchar + charw <= center_x + int(s * 3 / 16.0f)) {// 4.3.4.1
										if (ychar + charh <= center_y + int(s * 13 * yscale / 16)) {// 4.3.4.1t
											if (xchar + charw <= center_x + int(s * 5 / 32.0f)) {// 4.3.4.1.1
											}
											else {// 4.3.4.1.2
												ret.push_back(54);
											}
										}
										else {// 4.3.4.1.b
											ret.push_back(54);
										}
									}
									else {// 4.3.4.2
										ret.push_back(54);
									}
								}
								else {// 4.3.4.b
									if (xchar + charw <= center_x + int(s * 3 / 16.0f)) {// 4.3.4.3
										if (ychar + charh <= center_y + int(s * 15 * yscale / 16)) {// 4.3.4.3t
											ret.push_back(54);
										}
										else {// 4.3.4.3.b
											if (xchar + charw <= center_x + int(s * 5 / 32.0f)) {// 4.3.4.3.3
												ret.push_back(54);
											}
											else {// 4.3.4.3.4
											}
										}
									}
									else {// 4.3.4.4
									}
								}
							}
						}
					}
					else {// 4.4
						if (ychar + charh <= center_y + int(s * 3 * yscale / 4)) {// 4.4t
							if (xchar + charw <= center_x + int(s * 3 / 8.0f)) {// 4.4.1
								if (ychar + charh <= center_y + int(s * 5 * yscale / 8)) {// 4.4.1t
									if (xchar + charw <= center_x + int(s * 5 / 16.0f)) {// 4.4.1.1
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 4.4.1.1t
											if (xchar + charw <= center_x + int(s * 9 / 32.0f)) {// 4.4.1.1.1
												ret.push_back(45); ret.push_back(46); ret.push_back(49); ret.push_back(52);
											}
											else {// 4.4.1.1.2
												ret.push_back(40); ret.push_back(45); ret.push_back(46); ret.push_back(49); ret.push_back(52);
											}
										}
										else {// 4.4.1.1.b
											if (xchar + charw <= center_x + int(s * 9 / 32.0f)) {// 4.4.1.1.3
												ret.push_back(49); ret.push_back(50); ret.push_back(52);
											}
											else {// 4.4.1.1.4
												ret.push_back(40); ret.push_back(54); ret.push_back(49); ret.push_back(50); ret.push_back(52);
											}
										}
									}
									else {// 4.4.1.2
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 4.4.1.2t
											ret.push_back(40); ret.push_back(45); ret.push_back(46); ret.push_back(54);
										}
										else {// 4.4.1.2.b
											ret.push_back(40); ret.push_back(54);
										}
									}
								}
								else {// 4.4.1.b
									if (xchar + charw <= center_x + int(s * 5 / 16.0f)) {// 4.4.1.3
										if (ychar + charh <= center_y + int(s * 11 * yscale / 16)) {// 4.4.1.3t
											if (xchar + charw <= center_x + int(s * 9 / 32.0f)) {// 4.4.1.3.1
												ret.push_back(50); ret.push_back(52); ret.push_back(54);
											}
											else {// 4.4.1.3.2
												ret.push_back(40); ret.push_back(50); ret.push_back(52); ret.push_back(54);
											}
										}
										else {// 4.4.1.3.b
											ret.push_back(54);
										}
									}
									else {// 4.4.1.4
										if (ychar + charh <= center_y + int(s * 11 * yscale / 16)) {// 4.4.1.4t
											ret.push_back(40); ret.push_back(54);
										}
										else {// 4.4.1.4.b
											if (xchar + charw <= center_x + int(s * 11 / 32.0f)) {// 4.4.1.4.3
												ret.push_back(54);
											}
											else {// 4.4.1.4.4
											}
										}
									}
								}
							}
							else {// 4.4.2
								if (ychar + charh <= center_y + int(s * 5 * yscale / 8)) {// 4.4.2t
									if (xchar + charw <= center_x + int(s * 7 / 16.0f)) {// 4.4.2.1
										ret.push_back(54);
									}
									else {// 4.4.2.2
										if (ychar + charh <= center_y + int(s * 9 * yscale / 16)) {// 4.4.2.2t
											if (xchar + charw <= center_x + int(s * 15 / 32.0f)) {// 4.4.2.2.1
												ret.push_back(54);
											}
											else {// 4.4.2.2.2
											}
										}
										else {// 4.4.2.2.b
										}
									}
								}
								else {// 4.4.2.b
									if (xchar + charw <= center_x + int(s * 7 / 16.0f)) {// 4.4.2.3
										if (ychar + charh <= center_y + int(s * 11 * yscale / 16)) {// 4.4.2.3t
											if (xchar + charw <= center_x + int(s * 13 / 32.0f)) {// 4.4.2.3.1
												ret.push_back(54);
											}
											else {// 4.4.2.3.2
											}
										}
										else {// 4.4.2.3.b
										}
									}
									else {// 4.4.2.4
									}
								}
							}

						}
						else { //4.4b
							if (xchar + charw <= center_x + int(s * 3 / 8.0f)) {// 4.4.3
								if (ychar + charh <= center_y + int(s * 7 * yscale / 8)) {// 4.4.3t
									if (xchar + charw <= center_x + int(s * 5 / 16.0f)) {// 4.4.3.1
										if (ychar + charh <= center_y + int(s * 13 * yscale / 16)) {// 4.4.3.1t
											ret.push_back(54);
										}
										else {// 4.4.3.1.b
										}
									}
									else {// 4.4.1.2
									}
								}
								else {// 4.4.3.b
								}
							}
							else {// 4.4.4	
							}
						}
					}
				}
			}
		}
	}
	else {}
	return ret;
}

bool head::OverlapDetection(int xcell, int ycell, int xchar, int ychar, int char_nr) const
{
	int right0 = xcell;
	int bottom0 = ycell;
	int right1 = xchar + 15;
	int bottom1 = ychar + 18;
	int sector = SectorDetection(xcell, ycell, xchar, ychar);
	if (right0 >= xchar && xcell <= right1 && bottom0 >= ychar && ycell <= bottom1 && InnerSectorOverlap(xcell, ycell, xchar, ychar, sector))// collision detection
	{
		switch (char_nr)
		{
		case 0: //A
			return true && sector == 2 ||
				sector == 6 || sector == 8 ||
				sector == 10 || sector == 14 ||
				sector == 15 || sector == 16 || sector == 17 || sector == 18 || sector == 19 ||
				sector == 20 || sector == 24 ||
				sector == 25 || sector == 29;
			break;
		case 1: // B	
			return true && sector == 0 || sector == 1 || sector == 2 || sector == 3 ||
				sector == 5 || sector == 9 ||
				sector == 10 || sector == 11 || sector == 12 || sector == 13 ||
				sector == 15 || sector == 19 ||
				sector == 20 || sector == 24 ||
				sector == 25 || sector == 26 || sector == 27 || sector == 28;
			break;
		case 2: //C
			return true && sector == 1 || sector == 2 || sector == 3 ||
				sector == 5 || sector == 9 ||
				sector == 10 ||
				sector == 15 ||
				sector == 20 || sector == 24 ||
				sector == 26 || sector == 27 || sector == 28;
			break;
		case 3: //D
			return true && sector == 0 || sector == 1 || sector == 2 ||
				sector == 5 || sector == 8 ||
				sector == 10 || sector == 14 ||
				sector == 15 || sector == 19 ||
				sector == 20 || sector == 24 ||
				sector == 26 || sector == 27 || sector == 28;
			break;
		case 4: //E
			return true && sector == 0 || sector == 1 || sector == 2 || sector == 3 || sector == 4 ||
				sector == 5 ||
				sector == 10 || sector == 11 || sector == 12 ||
				sector == 15 ||
				sector == 20 ||
				sector == 25 || sector == 26 || sector == 27 || sector == 28 || sector == 29;
			break;
		case 5: //F
			return true && sector == 0 || sector == 1 || sector == 2 || sector == 3 || sector == 4 ||
				sector == 5 ||
				sector == 10 || sector == 11 || sector == 12 ||
				sector == 15 ||
				sector == 20 ||
				sector == 25;
			break;
		case 6: //G
			return true && sector == 1 || sector == 2 || sector == 3 ||
				sector == 5 || sector == 9 ||
				sector == 10 ||
				sector == 15 ||
				sector == 20 || sector == 22 || sector == 23 || sector == 24 ||
				sector == 26 || sector == 27 || sector == 28;
			break;
		case 7://H
			return true && sector == 0 || sector == 4 ||
				sector == 5 || sector == 9 ||
				sector == 10 || sector == 11 || sector == 12 || sector == 13 || sector == 14 ||
				sector == 15 || sector == 19 ||
				sector == 20 || sector == 24 ||
				sector == 25 || sector == 29;
			break;
		case 8: //I
			return true && sector == 0 || sector == 1 || sector == 2 || sector == 3 || sector == 4 ||
				sector == 7 ||
				sector == 12 ||
				sector == 17 ||
				sector == 22 ||
				sector == 25 || sector == 26 || sector == 27 || sector == 28 || sector == 29;
			break;
		case 9: //J
			return true && sector == 0 || sector == 1 || sector == 2 || sector == 3 || sector == 4 ||
				sector == 7 ||
				sector == 12 ||
				sector == 17 ||
				sector == 20 || sector == 22 ||
				sector == 26 || sector == 27;
			break;
		case 10: //K
			return true && sector == 0 || sector == 4 ||
				sector == 5 || sector == 8 ||
				sector == 10 || sector == 11 || sector == 12 ||
				sector == 15 || sector == 17 ||
				sector == 20 || sector == 23 ||
				sector == 25 || sector == 29;
			break;
		case 11: //L
			return true && sector == 0 ||
				sector == 5 ||
				sector == 10 ||
				sector == 15 ||
				sector == 20 ||
				sector == 25 || sector == 26 || sector == 27 || sector == 28 || sector == 29;
			break;
		case 12: //M
			return true && sector == 0 || sector == 4 ||
				sector == 5 || sector == 6 || sector == 8 || sector == 9 ||
				sector == 10 || sector == 12 || sector == 14 ||
				sector == 15 || sector == 17 || sector == 19 ||
				sector == 20 || sector == 24 ||
				sector == 25 || sector == 29;
			break;
		case 13: //N
			return true && sector == 0 || sector == 4 ||
				sector == 5 || sector == 6 || sector == 9 ||
				sector == 10 || sector == 12 || sector == 14 ||
				sector == 15 || sector == 18 || sector == 19 ||
				sector == 20 || sector == 24 ||
				sector == 25 || sector == 29;
			break;
		case 14: //O
			return true && sector == 1 || sector == 2 || sector == 3 ||
				sector == 5 || sector == 9 ||
				sector == 10 || sector == 14 ||
				sector == 15 || sector == 19 ||
				sector == 20 || sector == 24 ||
				sector == 26 || sector == 27 || sector == 28;
			break;
		case 15: //P
			return true && sector == 0 || sector == 1 || sector == 2 || sector == 3 ||
				sector == 5 || sector == 9 ||
				sector == 10 || sector == 11 || sector == 12 || sector == 13 ||
				sector == 15 ||
				sector == 20 ||
				sector == 25;
			break;
		case 16: //Q
			return true && sector == 1 || sector == 2 || sector == 3 ||
				sector == 5 || sector == 9 ||
				sector == 10 || sector == 14 ||
				sector == 15 || sector == 17 || sector == 19 ||
				sector == 20 || sector == 23 ||
				sector == 26 || sector == 27 || sector == 29;
			break;
		case 17: //R
			return true && sector == 0 || sector == 1 || sector == 2 || sector == 3 ||
				sector == 5 || sector == 9 ||
				sector == 10 || sector == 11 || sector == 12 || sector == 13 ||
				sector == 15 || sector == 19 ||
				sector == 20 || sector == 24 ||
				sector == 25 || sector == 29;
			break;
		case 18: //S
			return true && sector == 1 || sector == 2 || sector == 3 || sector == 4 ||
				sector == 5 ||
				sector == 11 || sector == 12 || sector == 13 ||
				sector == 19 ||
				sector == 24 ||
				sector == 25 || sector == 26 || sector == 27 || sector == 28;
			break;
		case 19: //T
			return true && sector == 0 || sector == 1 || sector == 2 || sector == 3 || sector == 4 ||
				sector == 7 ||
				sector == 12 ||
				sector == 17 ||
				sector == 22 ||
				sector == 27;
			break;
		case 20: //U
			return true && sector == 0 || sector == 4 ||
				sector == 5 || sector == 9 ||
				sector == 10 || sector == 14 ||
				sector == 15 || sector == 19 ||
				sector == 20 || sector == 24 ||
				sector == 26 || sector == 27 || sector == 28;
			break;
		case 21: //V
			return true && sector == 0 || sector == 4 ||
				sector == 5 || sector == 9 ||
				sector == 10 || sector == 14 ||
				sector == 16 || sector == 18 ||
				sector == 21 || sector == 23 ||
				sector == 27;
			break;
		case 22: //W
			return true && sector == 0 || sector == 4 ||
				sector == 5 || sector == 9 ||
				sector == 10 || sector == 14 ||
				sector == 15 || sector == 17 || sector == 19 ||
				sector == 20 || sector == 22 || sector == 24 ||
				sector == 26 || sector == 28;
			break;
		case 23: // X
			return true && sector == 0 || sector == 4 ||
				sector == 6 || sector == 8 ||
				sector == 12 ||
				sector == 17 ||
				sector == 21 || sector == 23 ||
				sector == 25 || sector == 29;
			break;
		case 24: //Y
			return true && sector == 0 || sector == 4 ||
				sector == 5 || sector == 9 ||
				sector == 11 || sector == 13 ||
				sector == 17 ||
				sector == 22 ||
				sector == 27;
			break;
		case 25: //Z
			return true && sector == 0 || sector == 1 || sector == 2 || sector == 3 || sector == 4 ||
				sector == 9 ||
				sector == 13 ||
				sector == 17 ||
				sector == 21 ||
				sector == 25 || sector == 26 || sector == 27 || sector == 28 || sector == 29;
			break;
		case 26: // 0
			return true && sector == 1 || sector == 2 || sector == 3 ||
				sector == 5 || sector == 8 || sector == 9 ||
				sector == 10 || sector == 12 || sector == 14 ||
				sector == 15 || sector == 17 || sector == 19 ||
				sector == 20 || sector == 21 || sector == 24 ||
				sector == 26 || sector == 27 || sector == 28;
			break;
		case 27: // 1
			return true && sector == 2 ||
				sector == 6 || sector == 7 ||
				sector == 12 ||
				sector == 17 ||
				sector == 21 ||
				sector == 26 || sector == 27 || sector == 28;
			break;
		case 28: //2
			return true && sector == 1 || sector == 2 || sector == 3 ||
				sector == 5 || sector == 9 ||
				sector == 14 ||
				sector == 16 || sector == 17 || sector == 18 ||
				sector == 20 ||
				sector == 25 || sector == 26 || sector == 27 || sector == 28 || sector == 29;
			break;
		case 29: //3
			return true && sector == 1 || sector == 2 || sector == 3 ||
				sector == 5 || sector == 9 ||
				sector == 12 || sector == 13 ||
				sector == 19 ||
				sector == 20 || sector == 24 ||
				sector == 26 || sector == 27 || sector == 28;
			break;
		case 30: // 4
			return true && sector == 3 ||
				sector == 7 || sector == 8 ||
				sector == 11 || sector == 13 ||
				sector == 15 || sector == 18 ||
				sector == 20 || sector == 21 || sector == 22 || sector == 23 || sector == 24 ||
				sector == 28;
			break;
		case 31: // 5
			return true && sector == 0 || sector == 1 || sector == 2 || sector == 3 || sector == 4 ||
				sector == 5 ||
				sector == 10 || sector == 11 || sector == 12 || sector == 13 ||
				sector == 19 ||
				sector == 24 ||
				sector == 25 || sector == 26 || sector == 27 || sector == 28;
			break;
		case 32: // 6
			return true && sector == 2 || sector == 3 || sector == 4 ||
				sector == 6 ||
				sector == 10 ||
				sector == 15 || sector == 16 || sector == 17 || sector == 18 ||
				sector == 24 ||
				sector == 26 || sector == 27 || sector == 28;
			break;
		case 33: // 7
			return true && sector == 0 || sector == 1 || sector == 2 || sector == 3 || sector == 4 ||
				sector == 9 ||
				sector == 13 ||
				sector == 17 ||
				sector == 21 ||
				sector == 26;
			break;
		case 34: // 8
			return true && sector == 1 || sector == 2 || sector == 3 ||
				sector == 5 || sector == 9 ||
				sector == 11 || sector == 12 || sector == 13 ||
				sector == 15 || sector == 19 ||
				sector == 20 || sector == 24 ||
				sector == 26 || sector == 27 || sector == 28;
			break;
		case 35: // 9
			return true && sector == 1 || sector == 2 || sector == 3 ||
				sector == 5 || sector == 9 ||
				sector == 11 || sector == 12 || sector == 13 || sector == 14 ||
				sector == 19 ||
				sector == 23 ||
				sector == 26;
			break;
		case 36: // .
			return true &&  //
				//
				//
				//
				sector == 20 || sector == 21 ||
				sector == 25 || sector == 26;
			break;
		case 37: // ,
			return true &&  //
				 //
				 //
				sector == 15 || sector == 16 ||
				sector == 21 ||
				sector == 25;
			break;
		case 38: // '
			return true && sector == 0 ||
				sector == 5;
			//
			//
		//
			//
			break;
		case 39: // !
			return true && sector == 0 ||
				sector == 5 ||
				sector == 10 ||
				sector == 15 ||
				//
				sector == 25;
			break;
		case 40: // -
			return true &&
				sector == 11 || sector == 12 || sector == 13;
			break;
		case 41: // ?
			return true && sector == 1 || sector == 2 || sector == 3 ||
				sector == 5 || sector == 9 ||
				sector == 14 ||
				sector == 17 ||
				//
				sector == 27;
		default:
			return false;
			break;
		}
	}
	else
	{
		return false;
	}
}


bool head::InnerSectorOverlap(int xcell, int ycell, int xchar, int ychar, int sect_nr) const
{
	int ix; //column coordinate in 5x6 matrix
	int iy; // row coordinnate in 5x6 matrix
	switch (sect_nr) {
	case 0:
		ix = 0;
		iy = 0;
		break;
	case 1:
		ix = 1;
		iy = 0;
		break;
	case 2:
		ix = 2;
		iy = 0;
		break;
	case 3:
		ix = 3;
		iy = 0;
		break;
	case 4:
		ix = 4;
		iy = 0;
		break;
	case 5:
		ix = 0;
		iy = 1;
		break;
	case 6:
		ix = 1;
		iy = 1;
		break;
	case 7:
		ix = 2;
		iy = 1;
		break;
	case 8:
		ix = 3;
		iy = 1;
		break;
	case 9:
		ix = 4;
		iy = 1;
		break;
	case 10:
		ix = 0;
		iy = 2;
		break;
	case 11:
		ix = 1;
		iy = 2;
		break;
	case 12:
		ix = 2;
		iy = 2;
		break;
	case 13:
		ix = 3;
		iy = 2;
		break;
	case 14:
		ix = 4;
		iy = 2;
		break;
	case 15:
		ix = 0;
		iy = 3;
		break;
	case 16:
		ix = 1;
		iy = 3;
		break;
	case 17:
		ix = 2;
		iy = 3;
		break;
	case 18:
		ix = 3;
		iy = 3;
		break;
	case 19:
		ix = 4;
		iy = 3;
		break;
	case 20:
		ix = 0;
		iy = 4;
		break;
	case 21:
		ix = 1;
		iy = 4;
		break;
	case 22:
		ix = 2;
		iy = 4;
		break;
	case 23:
		ix = 3;
		iy = 4;
		break;
	case 24:
		ix = 4;
		iy = 4;
		break;
	case 25:
		ix = 0;
		iy = 5;
		break;
	case 26:
		ix = 1;
		iy = 5;
		break;
	case 27:
		ix = 2;
		iy = 5;
		break;
	case 28:
		ix = 3;
		iy = 5;
		break;
	case 29:
		ix = 4;
		iy = 5;
		break;

	default:
		break;
	}
	const int right0 = xcell;
	const int bottom0 = ycell;
	const int right1 = xchar + ix * 3 + 1;
	const int bottom1 = ychar + iy * 3 + 1;
	return right0 >= xchar + ix * 3 && right0 <= right1 && bottom0 >= ychar + iy * 3 && bottom0 <= bottom1;
}


int head::SectorDetection(int xcell, int ycell, int xchar, int ychar) const
{
	if (ycell < ychar + 9) {
		if (xcell < xchar + 6) {// 1st quardrant
			if (ycell < ychar + 6) {
				if (ycell < ychar + 3) {
					if (xcell < xchar + 3) {
						return 0;
					}
					else return 1;
				}
				else {
					if (xcell < xchar + 3) {
						return 5;
					}
					else return 6;
				}
			}
			else {
				if (xcell < xchar + 3) {
					return 10;
				}
				else return 11;
			}
		}
		else {//2nd quadrant
			if (ycell < ychar + 3) {
				if (xcell < xchar + 9) {
					return 2;
				}
				else {
					if (xcell < xchar + 12) {
						return 3;
					}
					else return 4;
				}
			}
			else
			{
				if (ycell < ychar + 6) {
					if (xcell < xchar + 9) {
						return 7;
					}
					else {
						if (xcell < xchar + 12) {
							return 8;
						}
						else return 9;
					}
				}
				else {
					if (xcell < xchar + 9) {
						return 12;
					}
					else {
						if (xcell < xchar + 12) {
							return 13;
						}
						else return 14;
					}
				}
			}
		}
	}
	else {
		if (xcell < xchar + 6) {// 3rd quardrant
			if (ycell < ychar + 12) {
				if (xcell < xchar + 3) {
					return 15;
				}
				else return 16;
			}
			else
			{
				if (ycell < ychar + 15) {
					if (xcell < xchar + 3) {
						return 20;
					}
					else return 21;

				}
				else {
					if (xcell < xchar + 3) {
						return 25;
					}
					else return 26;
				}
			}
		}
		else {//4th quadrant
			if (ycell < ychar + 12) {
				if (xcell < xchar + 9) {
					return 17;
				}
				else {
					if (xcell < xchar + 12) {
						return 18;
					}
					else return 19;
				}
			}
			else {
				if (ycell < ychar + 15) {
					if (xcell < xchar + 9) {
						return 22;
					}
					else {
						if (xcell < xchar + 12) {
							return 23;
						}
						else return 24;
					}
				}
				else {
					if (xcell < xchar + 9) {
						return 27;
					}
					else {
						if (xcell < xchar + 12) {
							return 28;
						}
						else return 29;
					}
				}
			}
		}
	}
}


void head::Draw(Graphics & gfx, std::vector<PixelFont> overlapping_characters[]) const
{


	DrawSteepR(gfx, 0.5f, center_x - int(s / 8.0f), center_y - int(s * 7 / 16.0f), int(s / 4.0f), 1, overlapping_characters[6]);
	DrawSteepR(gfx, 0.5f, center_x - int(s / 4.0f), center_y - int(s * 7 / 16.0f), int(s / 4.0f), 1, overlapping_characters[4]);
	DrawSteepR(gfx, 0.5f, center_x - int(s * 3 / 8.0f), center_y - int(s * 7 / 16.0f), int(s / 4.0f), 1, overlapping_characters[2]);
	DrawSteepR(gfx, 0.5f, center_x - int(s / 2.0f), center_y - int(s * 7 / 16.0f), int(s / 4.0f), 1, overlapping_characters[0]);//first triangle spike from left

	DrawCol(gfx, center_x - int(s * 3 / 8.0f), center_y - int(s * 11 / 16.0f), int(s / 4.0f), 1, overlapping_characters[1]);
	DrawCol(gfx, center_x - int(s / 4.0f), center_y - int(s * 11 / 16.0f), int(s / 4.0f), 1, overlapping_characters[3]);
	DrawCol(gfx, center_x - int(s / 8.0f), center_y - int(s * 11 / 16.0f), int(s / 4.0f), 1, overlapping_characters[5]); // left side crown columns

	DrawSteepR(gfx, -0.5f, center_x + int(s / 8.0f), center_y - int(s * 7 / 16.0f), int(s / 4.0f), 1, overlapping_characters[7]);
	DrawSteepR(gfx, -0.5f, center_x + int(s / 4.0f), center_y - int(s * 7 / 16.0f), int(s / 4.0f), 1, overlapping_characters[9]);
	DrawSteepR(gfx, -0.5f, center_x + int(s * 3 / 8.0f), center_y - int(s * 7 / 16.0f), int(s / 4.0f), 1, overlapping_characters[11]);
	DrawSteepR(gfx, -0.5f, center_x + int(s / 2.0f), center_y - int(s * 7 / 16.0f), int(s / 4.0f), 1, overlapping_characters[13]);//first from right

	DrawCol(gfx, center_x + int(s * 3 / 8.0f), center_y - int(s * 11 / 16.0f), int(s / 4.0f), 1, overlapping_characters[12]);
	DrawCol(gfx, center_x + int(s / 4.0f), center_y - int(s * 11 / 16.0f), int(s / 4.0f), 1, overlapping_characters[10]);
	DrawCol(gfx, center_x + int(s / 8.0f), center_y - int(s * 11 / 16.0f), int(s / 4.0f), 1, overlapping_characters[8]); // right side crown columns

	DrawLine(gfx, center_x - int(s / 2.0f), center_y - int(s * 7 / 16.0f), s, 1, overlapping_characters[14]);
	DrawLine(gfx, center_x - int(s / 2.0f), center_y - int(s * 5 / 16.0f), s, 1, overlapping_characters[17]);// crown base

	DrawCol(gfx, center_x - int(s / 2.0f), center_y - int(s * 7 / 16.0f), int(s * 5 / 8.0f), 1, overlapping_characters[15]);
	DrawCol(gfx, center_x + int(s / 2.0f), center_y - int(s * 7 / 16.0f), int(s * 5 / 8.0f), 1, overlapping_characters[16]); //right and left columns of face

	DrawLine(gfx, center_x - int(s * 3 / 8.0f), center_y - int(s * 9 / 40.0f), int(s * 7 / 20.0f), 1, overlapping_characters[18]);
	DrawLine(gfx, center_x - int(s * 3 / 8.0f), center_y - int(s * 13 / 80.0f), int(s * 7 / 20.0f), 1, overlapping_characters[19]);
	DrawCol(gfx, center_x - int(s * 3 / 8.0f), center_y - int(s * 9 / 40.0f), int(s / 16.0f), 1, overlapping_characters[20]);
	DrawCol(gfx, center_x - int(s / 40.0f), center_y - int(s * 9 / 40.0f), int(s / 16.0f), 1, overlapping_characters[21]); //left eyebrow

	DrawLine(gfx, center_x + int(s / 40.0f), center_y - int(s * 9 / 40.0f), int(s * 7 / 20.0f), 1, overlapping_characters[22]);
	DrawLine(gfx, center_x + int(s / 40.0f), center_y - int(s * 13 / 80.0f), int(s * 7 / 20.0f), 1, overlapping_characters[23]);
	DrawCol(gfx, center_x + int(s / 40.0f), center_y - int(s * 9 / 40.0f), int(s / 16.0f), 1, overlapping_characters[24]);
	DrawCol(gfx, center_x + int(s * 3 / 8.0f), center_y - int(s * 9 / 40.0f), int(s / 16.0f), 1, overlapping_characters[25]); //right eyebrow

	DrawLine(gfx, center_x - int(s / 4.0f), center_y - int(s * 1 / 8.0f), int(s / 8.0f), 1, overlapping_characters[26]);
	DrawLine(gfx, center_x - int(s / 4.0f), center_y - int(s * 1 / 10.0f), int(s / 8.0f), 1, overlapping_characters[27]);
	DrawCol(gfx, center_x - int(s / 4.0f), center_y - int(s * 1 / 8.0f), int(s / 40.0f), 1, overlapping_characters[28]);
	DrawCol(gfx, center_x - int(s / 8.0f), center_y - int(s * 1 / 8.0f), int(s / 40.0f), 1, overlapping_characters[29]); //left eye

	DrawLine(gfx, center_x + int(s / 8.0f), center_y - int(s * 1 / 8.0f), int(s / 8.0f), 1, overlapping_characters[30]);
	DrawLine(gfx, center_x + int(s / 8.0f), center_y - int(s * 1 / 10.0f), int(s / 8.0f), 1, overlapping_characters[31]);
	DrawCol(gfx, center_x + int(s / 4.0f), center_y - int(s * 1 / 8.0f), int(s / 40.0f), 1, overlapping_characters[33]);
	DrawCol(gfx, center_x + int(s / 8.0f), center_y - int(s * 1 / 8.0f), int(s / 40.0f), 1, overlapping_characters[32]); //right eye

	DrawSteepR(gfx, 0.4f, center_x - int(s / 8.0f), center_y + int(s * 3 / 16.0f), int(s * 5 / 16.0f), 1, overlapping_characters[34]);
	DrawSteepR(gfx, -0.4f, center_x + int(s / 8.0f), center_y + int(s * 3 / 16.0f), int(s * 5 / 16.0f), 1, overlapping_characters[35]);
	DrawLine(gfx, center_x - int(s / 8.0f), center_y + int(s * 3 / 16.0f), int(s / 4.0f), 1, overlapping_characters[36]); // nose

	DrawLine(gfx, center_x - int(s / 4.0f), center_y + int(s * 5 / 16.0f), int(s / 2.0f), 1, overlapping_characters[49]);
	DrawLine(gfx, center_x - int(s / 4.0f), center_y + int(s * 29 / 80.0f), int(s / 2.0f), 1, overlapping_characters[50]);
	DrawCol(gfx, center_x - int(s / 4.0f), center_y + int(s * 5 / 16.0f), int(s / 20.0f), 1, overlapping_characters[51]);
	DrawCol(gfx, center_x + int(s / 4.0f), center_y + int(s * 5 / 16.0f), int(s / 20.0f), 1, overlapping_characters[52]); //lips

	DrawLine(gfx, center_x - int(s / 2.0f), center_y + int(s * 3 / 16.0f), int(s * 3 / 16.0f), 1, overlapping_characters[37]);
	DrawCol(gfx, center_x - int(s * 5 / 16.0f), center_y + int(s * 3 / 16.0f), int(s * 27 / 160.0f), 1, overlapping_characters[38]);//left cheek

	DrawLine(gfx, center_x + int(s * 5 / 16.0f), center_y + int(s * 3 / 16.0f), int(s * 3 / 16.0f), 1, overlapping_characters[39]);
	DrawCol(gfx, center_x + int(s * 5 / 16.0f), center_y + int(s * 3 / 16.0f), int(s * 27 / 160.0f), 1, overlapping_characters[40]);//right cheek

	DrawLine(gfx, center_x - int(s * 5 / 16.0f), center_y + int(s / 4.0f), int(s * 17 / 64.0f), 1, overlapping_characters[41]);
	DrawLine(gfx, center_x - int(s * 5 / 16.0f), center_y + int(s * 9 / 32.0f), int(s * 19 / 64.0f), 1, overlapping_characters[42]);
	DrawCol(gfx, center_x - int(s / 64.0f), center_y + int(s * 3 / 16.0f), int(s * 3 / 32.0f), 1, overlapping_characters[44]);
	DrawSteepR(gfx, 0.5f, center_x - int(s * 3 / 64.0f), center_y + int(s / 4.0f), int(s / 16.0f), 1, overlapping_characters[43]); // left moustache

	DrawLine(gfx, center_x + int(s * 3 / 64.0f), center_y + int(s / 4.0f), int(s * 17 / 64.0f), 1, overlapping_characters[45]);
	DrawLine(gfx, center_x + int(s / 64.0f), center_y + int(s * 9 / 32.0f), int(s * 19 / 64.0f), 1, overlapping_characters[46]);
	DrawCol(gfx, center_x + int(s / 64.0f), center_y + int(s * 3 / 16.0f), int(s * 3 / 32.0f), 1, overlapping_characters[48]);
	DrawSteepR(gfx, -0.5f, center_x + int(s * 3 / 64.0f), center_y + int(s / 4.0f), int(s / 16.0f), 1, overlapping_characters[47]); // right moustache

	DrawLine(gfx, center_x - int(s / 40.0f), center_y + int(s * 3 / 8.0f), int(s / 20.0f), 1, overlapping_characters[55]);
	DrawLine(gfx, center_x - int(s / 40.0f), center_y + int(s * 123 / 200.0f), int(s / 20.0f), 1, overlapping_characters[56]);
	DrawCol(gfx, center_x - int(s / 40.0f), center_y + int(s * 3 / 8.0f), int(s * 6 / 25.0f), 1, overlapping_characters[57]);
	DrawCol(gfx, center_x + int(s / 40.0f), center_y + int(s * 3 / 8.0f), int(s * 6 / 25.0f), 1, overlapping_characters[58]); //beard


	DrawSteepR(gfx, -190 / 170.0f, center_x - int(s / 40.0f), center_y + int(s * 123 / 200.0f), int(s * 17 / 40.0f), 1, overlapping_characters[53]);

	DrawSteepR(gfx, 190 / 170.0f, center_x + int(s / 40.0f), center_y + int(s * 123 / 200.0f), int(s * 17 / 40.0f), 1, overlapping_characters[54]);//chin

}

void head::DrawCell(Graphics & gfx, int posx, int posy, bool collision, Color c) const
{
	if (collision) {
		gfx.PutPixel(posx, posy, c);
	}

}

void head::DrawLine(Graphics & gfx, int posx, int posy, int l, int spacing, std::vector<PixelFont> characters_in_sector) const
{
	for (int i = posx; i < posx + l * xdim; i += spacing * xdim) {
		bool overlap = false; // local overlap variable to determine whether cell should get drawn or not
		for (int a = 0; a < characters_in_sector.size(); a++)
		{
			overlap = overlap || OverlapDetection(i, posy, characters_in_sector[a].GetX(), characters_in_sector[a].GetY(), characters_in_sector[a].GetCharNr());
		}
		DrawCell(gfx, i, posy, overlap, col);
	}
}

void head::DrawCol(Graphics & gfx, int posx, int posy, int h, int spacing, std::vector<PixelFont>characters_in_sector) const
{

	for (int i = posy; i < posy + h * ydim; i += spacing * ydim) {
		bool overlap = false; // local overlap variable to determine whether cell should get drawn or not
		for (int a = 0; a < characters_in_sector.size(); a++)
		{
			overlap = overlap || OverlapDetection(posx, i, characters_in_sector[a].GetX(), characters_in_sector[a].GetY(), characters_in_sector[a].GetCharNr());
		}
		DrawCell(gfx, posx, i, overlap, col);
	}
}

void head::DrawSteepR(Graphics & gfx, float steep_x, int posx, int posy, int l, int spacing, std::vector<PixelFont>characters_in_sector) const
{
	if (steep_x < 0.0f) {
		for (float i = float(posx); i > float(posx) + steep_x * l*float(xdim); i += steep_x * float(spacing)*float(xdim)) {
			bool overlap = false; // local overlap variable to determine whether cell should get drawn or not
			for (int a = 0; a < characters_in_sector.size(); a++)
			{
				overlap = overlap || OverlapDetection(int(i), posy, characters_in_sector[a].GetX(), characters_in_sector[a].GetY(), characters_in_sector[a].GetCharNr());
			}
			DrawCell(gfx, int(i), posy, overlap, col);
			posy -= spacing * ydim;
		}
	}
	else {

		for (float i = float(posx); i < float(posx) + steep_x * l*float(xdim); i += steep_x * float(spacing)*float(xdim)) {
			bool overlap = false; // local overlap variable to determine whether cell should get drawn or not
			for (int a = 0; a < characters_in_sector.size(); a++)
			{
				overlap = overlap || OverlapDetection(int(i), posy, characters_in_sector[a].GetX(), characters_in_sector[a].GetY(), characters_in_sector[a].GetCharNr());
			}
			DrawCell(gfx, int(i), posy, overlap, col);
			posy -= spacing * ydim;
		}
	}
}
